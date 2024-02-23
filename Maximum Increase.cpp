#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

void solve(){
    ll i,j,k;
        ll n;

        cin>>n;
        ll a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        ll count=1,max=1;

        for(i=1;i<n;i++)
        {
            if(a[i]>a[i-1])
                count++;
            else
            {
                if(count>max)
                    max=count;

                count=1;
            }
        }

        if(count>max)
            max=count;

        cout<<max;

}

int main()
{
    int t;
    // cin >> t;
    // while (t--)
    {
        solve();
    }
}