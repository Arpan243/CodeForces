#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<vector<int>>
#define pi pair<int, int>
#define vpi vector<pair<int, int>>
#define mii map<int, int>
#define pb push_back
#define __the_great_mks               \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
	int n;
	string s,ans,temp;
	cin>>n>>s;
	bool check1=false,check2=false;
	int i=0,j=0,cnt=0,cnt1=0;
	while(j<n)
	{
		if(s[j]=='1')
		{
			check1=true;
			cnt++;
		}
		if(s[j]=='0') 
		{
			
			if(!check1)
			{
				cnt1++;
			}
			else if(!check2)
			{
				cnt1++;
				check2=true;
			}
			cnt=0;
		}
		j++;
	}
	for(int i=0;i<cnt1;i++)
		ans+='0';
	
	for(int i=0;i<cnt;i++)
		ans+='1';
	cout<<ans<<endl;
}
int32_t main()
{
    __the_great_mks;
    int t=1;
	cin>>t;
	while(t--)
	{
		solve();
	}
    return 0;
}