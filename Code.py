def create_input_csv_model(hours='24', block_type='one hour', timeslot=''):
    # No weather parameters
    testCSV = 'input'
    # get number of blocks using key from model_blocks_map
    day_csv_blocks = model_blocks_map[hours + '#' + block_type + timeslot]

    for discom in region_map.keys():

        timeforecast = []
        now = datetime.datetime.now()
        if hours == '24':
            if timeslot == "6pm":
               now = now.replace(hour=18)
            else:
                now = now.replace(hour=6)   
        if block_type == '15 min':
            now = now.replace(minute=0)
            testCSV = "input_15min"
            # timeforecast = past_datetime_list_15min(now, day_csv_blocks, 0)
            timeforecast = past_datetime_list_15min(now, day_csv_blocks, 0)  # account for 15 min gap in ftp server

        else:
            # timeforecast = past_datetime_list_hour(now, day_csv_blocks, 0)
            timeforecast = past_datetime_list_hour(now, day_csv_blocks, 0)  # account for 15 in gap in ftp server
        # discom = "Discom -I"
        # print(len(timeforecast))
        save_csv = "Test/" + discom + "_" + testCSV  + timeslot + hours  +  ".csv"
        # Start: Clear the CSV File 
        clear_file(save_csv, "Old CSV Cleared " + save_csv)
        # End: Clear the CSV File 
        myset = loadactual.objects.filter(block_type='15 min', date__in=timeforecast, region=region_map[discom]) \
            .values('date', 'load').distinct()

        if myset.exists():
            myset = list(myset)
            df = pd.DataFrame.from_records(myset)
            # print(len(myset))
            del myset

            # TODO: Account for missing data (model team discuss)
            if not (len(df.index) == day_csv_blocks):
                missing_data = list(set(timeforecast) - set(df['date'].tolist()))
                # print(len(missing_data))
                # print("missing data count")
                if len(missing_data) > 0:
                    # print(len(missing_data))
                    # print("^missing data len")
                    forecastset = forecast.objects.filter(block_type='15 min', date__in=missing_data,
                                                          region=region_map[discom]).values('date', 'load', 'revision')
                    forecastset = forecastset.order_by('date', '-revision').distinct('date')
                    forecastset = pd.DataFrame.from_records(forecastset)
                    # print(forecastset.shape)
                    if 'revision' in forecastset.columns:
                        forecastset.drop(columns=['revision'], inplace=True)
                    # print(forecastset)
                    df = df.append(forecastset, ignore_index=True)

            # end of TODO
            df = df.sort_values('date', ascending=True)
            df.rename(columns={
                'date': 'Date',
                'load': discom
            }, inplace=True)

            # if (block_type == "15 min"):
            #     df.rename(columns = {
            #         'date' : 'Date',
            #         'load' : region_map[discom]
            #     }, inplace = True)
            # else:
            #     df.rename(columns = {
            #         'date' : 'Date',
            #         'load' : discom
            #     }, inplace = True)
            df.to_csv(save_csv, index=False)
        else:
            # if no actual data is available for all blocks
            logger.error("Data not available :: create_input_csv_model  with model:", hours, "and block type:",
                         block_type)
            send_email()
            print("Data not available :: create_input_csv_model  with model:", hours, "and block type:", block_type)

            missing_data = timeforecast
            forecastset = forecast.objects.filter(block_type='15 min', date__in=missing_data,
                                                  region=region_map[discom]).values('date', 'load', 'revision')
            forecastset = forecastset.order_by('date', '-revision').distinct('date')
            df = pd.DataFrame.from_records(forecastset)
            df.drop(columns=['revision'], inplace=True)
            df = df.sort_values('date', ascending=True)
            df.rename(columns={
                'date': 'Date',
                'load': discom
            }, inplace=True)
            df.to_csv(save_csv, index=False)

            print("No Actual Data available :: create_input_csv_model  with model:", hours, "and block type:",
                  block_type)



def past_datetime_list_15min(date_time, blocks, skip_blocks=0):
    """ This function is updating datetime_list every 15 minutes covering all the blocks and returning the
    datetime_list list in string format."""
    
    datetime_list = []

    for i in range(skip_blocks, blocks + skip_blocks):
        datetime_list.append(date_time - datetime.timedelta(minutes=15 * i))

    datetime_list = [time.strftime('%m-%d-%Y %H:%M') for time in datetime_list]
    return datetime_list
