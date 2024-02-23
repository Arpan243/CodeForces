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
	long int x,y,n,k,r,m,i,c;
while(cin>>y>>k>>n)
    {
        r=k-y%k;
        m=n-y;
        if(r<=m)
        {
            cout<<r;
            r=r+k;

            while(r<=m)
            {
                cout<<" "<<r;
                r=r+k;
            }
        }
        else
        {
            cout<<"-1";
        }
        cout<<endl;

    }
    
}
int32_t main()
{
    __the_great_mks;
    int t=1;
	// cin>>t;
	while(t--)
	{
		solve();
	}
    return 0;
}