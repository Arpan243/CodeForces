#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<vector<int>>
#define pi pair<int, int>
#define vpi vector<pair<int, int>>
#define mii map<int, int>
#define ll long long
#define pb push_back
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define asort(a) sort(a, a + n)
#define fl(i, n) for (int i = 0; i < n; i++)
#define __the_great_mks               \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void Arpan()
{
    int n;
    cin>>n;
    int a[n];
    input(a,n);
    asort(a);
    int ans = 1;
    rep(i,0,n-1)
    {
        if(a[i] != ans)
        {
            cout<<ans;
            return ;
        }
        ans++;
    }
    cout<<n+1;

    return;
}

int main()
{

    int t = 1;
    // cin >> t;
    while (t--)
    {
        Arpan();
    }

    return 0;
}
