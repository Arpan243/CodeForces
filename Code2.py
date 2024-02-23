def get_SCADA_data_v1():
    """
    MAIN FUNCTION FOR SCADA DATA COLLECTION
    order of columns::
    central : discom2 (2)
    east : discom1 (3)
    west : discom3 (4)
    railway : customer1 (5)
    total (6)
    """
    scada_file = 'C:/FTP_IN_SCADA/demand_data_hourly.txt'  # server
    # scada_file = 'C:/STLF_15min_test/stlfdata.txt'
    # scada_file = 'C:/Users/reuat/OneDrive/Desktop/demand_data_hourly.txt' # development
    print('Starting the program to read scada file')
    df = pd.read_csv(scada_file, header=None, sep=' ')
    global last_inserted
    time_stamp = datetime.datetime.now()
    minutes_set = int(time_stamp.minute / 15) * 15
    time_stamp = time_stamp.replace(minute=minutes_set)
    time_for_outlier = time_stamp - datetime.timedelta(minutes=15)
    # print(time_stamp)
    time_taken = time_stamp
    time_stamp = time_stamp.strftime('%m-%d-%Y %H:%M')
    df.dropna(how='all', axis='columns', inplace=True)
    df[0] = df[0].astype(str)
    df[1] = df[1].astype(str)
    df[0] = df[0].map(lambda x: str(x.split(':')[0]) + ":" + str(x.split(':')[1]).zfill(2) if (":" in x) else "empty")

    df[1] = df[1].map(
        lambda x: datetime.datetime.strptime(x, '%d-%m-%y').strftime('%m-%d-%Y') if ("-" in x) else "empty")
    df['date'] = df[1] + ' ' + df[0]

    # print(df.head())
    df.rename(columns={
        2: 'Discom2',
        3: 'Discom1',
        4: 'Discom3',
        5: 'Customer1',
        6: 'Total'
    }, inplace=True)
    df.drop([0, 1], inplace=True)
    # print(df.head())
    

    df_time = df.loc[df['date'] == time_stamp]

    discom_list = ['Discom1', 'Discom2', 'Discom3', 'Customer1', 'Total']

    to_insert_ts = []
    if df_time.empty:
        limit_of_days = 672
        while df_time.empty and limit_of_days:
            print('Data missing / unavailable for timestamp', time_stamp)
            # send_email()
            time_taken = time_taken - datetime.timedelta(minutes=15)
            time_stamp = time_taken.strftime('%m-%d-%Y %H:%M')
            check_odd_time = time_taken.strftime('%H:%M')
            if check_odd_time == '00:00':
                time_stamp = time_taken.strftime('%m-%d-%Y %H:14')
            df_time = df.loc[df['date'] == time_stamp]
            limit_of_days -= 1

    to_insert_ts.append(time_stamp)
    # print(time_stamp)
    print(to_insert_ts)

    last_inserted = time_stamp

    last_entry = loadactual.objects.filter(date__icontains=time_taken.strftime('%m-%d-%Y'))
    
    # print(last_entry)

    if last_entry.exists():
        last_entry = last_entry.order_by('-date')[0]
        last_entry = last_entry.date
    else:
        last_entry = '99-99-9999 99:99'

    # print(last_entry)
    past_timestamp = time_taken
    check_timestamp = past_timestamp.strftime('%m-%d-%Y %H:%M')
    if last_entry < time_stamp:
        print("Checking Previous entries")
    while last_entry < check_timestamp:
        past_timestamp = past_timestamp - datetime.timedelta(minutes=15)
        check_timestamp = past_timestamp.strftime('%m-%d-%Y %H:%M')
        check_odd_time = past_timestamp.strftime('%H:%M')
        if check_odd_time == '00:00':
            print('inside if')
            check_timestamp = past_timestamp.strftime('%m-%d-%Y %H:14')

        to_insert_ts.append(check_timestamp)
    # to_insert_ts.append('07-08-2020 00:14')  
    # print(to_insert_ts)
    for ts in to_insert_ts:
        df_time = df.loc[df['date'] == ts]
        if not df_time.empty:
            for key in discom_list:
                df_insert = df_time.copy(deep=True)
                df_insert.rename(columns={
                    key: 'load',
                    'date': 'date'
                }, inplace=True)
                attributes = ['date', 'load']
                df_insert.drop(df_insert.columns.difference(attributes), 1, inplace=True)
                #  Take single record

                df_insert = df_insert.to_dict('records')[0]
                if ts.split(' ')[1] == '00:14':
                    ts_date = ts.split(' ')[0]
                    ts = ts_date + ' ' + '00:00'

                df_insert['date'] = ts
                df_insert['region'] = key
                df_insert['block_type'] = '15 min'
                df_insert['insertion_ts'] = int(time.time())
                df_insert['event_type'] = '0'
                check_entry = loadactual.objects.filter(date=df_insert['date'], block_type=df_insert['block_type'],
                                                        region=df_insert['region'])
                # print(df_insert)
                df_insert_new = remove_outliers(df_insert, time_for_outlier)
                # print(df_insert_new)
                if(df_insert['load'] != df_insert_new['load']):
                    df_insert_new['load_actual'] = df_insert['load']
                else:
                    df_insert_new['load_actual'] = None    
                # print(df_insert_new)
                if check_entry.exists():
                    if not (check_entry.filter(load=df_insert['load']).exists()):
                        check_entry.update(**df_insert_new)
                else:
                    load = loadactual(**df_insert_new)
                    load.save()
    print("End of SCADA Function")
    return



def remove_outliers(df_load, time_for_outlier):
    """
    function for detecting outliers in the data
    """
    # print(len(df_load))
    load = df_load['load']
    discom = df_load['region']
    block_type = df_load['block_type']
    # from_time = df_load['date']
    date_time_arr = past_datetime_list_15min(time_for_outlier, 288, 0)
    #print((date_time_arr))
    last_entry = loadactual.objects.filter(region = discom, block_type = block_type, date__in = date_time_arr).order_by('-id').values('date', 'load')[::-1]
    #print((last_entry))
    last_entry = pd.DataFrame(last_entry)
    x = list((last_entry['load']).astype(float))
    # print(type(x))
    x.append(load)
    x = np.array(x)
    # print(x)
    # print(len(x))
    window_size = 1
    i = 0
    # print(x)
    # Initialize an empty list to store moving averages
    moving_averages = [] 
    # Loop through the array t o
    #consider every window of size 3
    while i < len(x) - 47:
    
        # Calculate the average of current window
        window_average = np.round(np.sum(x[i:i+window_size]) / window_size, 2)
        
        # Store the average of current
        # window in moving average list
        moving_averages.append(window_average)
        
        # Shift window to right by one position
        if window_size < 48:
            window_size += 1
        else:
            i += 1    
    
    # print(len(moving_averages))
    # print(x)
    mean_threshold=2.5
    demand_threshold=800
    ub_m = []
    lb_m = []
    # y = mat['x_test'][0]
    y = sorted(x)
    IQR = stats.iqr(y, interpolation = 'midpoint')
    # print(IQR*mean_threshold)
    for i in moving_averages:
        ub_m.append(i+mean_threshold*IQR)
        lb_m.append(i-mean_threshold*IQR)
        
    # print(len(lb_m)) 
    flag_0 = [0]*(len(x))
    roll = [0]
    for i in range(len(x)-1):
        roll.append(abs(x[i+1] - x[i]))
        
    # print(len(roll))
    # x_new = [0]*(len(x))
    # erase this loop, instead check all, check your last 289th value
    # for i in range(len(x)):
    new_value = x[-1]
    if x[-1] >= ub_m[-1] or x[-1] <= lb_m[-1]:
        new_value = x[-2]
        print("outlier outside bounds", i)
        
    # if flag_0[i] != 0:
    #     x_new[i] = x[i-1]   
    # else:
    #     x_new[i] = x[i]
            
    # print(len(x_new))        
            
    # a = np.array(flag_0)
    # b = np.array(x)
    # temp = np.multiply(a, b)

    # flag_1 = [0]*(len(x))
    # x_new2 = [0]*(len(x))
    # for i in range(len(x)):
    #     if roll[i] >= demand_threshold and x_new[i] <= ub_m[i] and x_new[i] >= lb_m[i]:
    #         flag_1[i] = 1
            
    # for i in range(289):
    #     if flag_1[i] != 0:
    #         # flag_1[i+1] = 0
    #         print("outlier inside bound", i)
        
    #     if flag_1[i] != 0:
    #         x_new2[i] = x[i-1]
    #     else:
    #         x_new2[i] = x[i] 
        
    df_load['load'] = new_value
    return df_load
