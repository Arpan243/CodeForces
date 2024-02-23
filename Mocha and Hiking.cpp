#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define input(a, n)             \
    for (int i = 0; i < n; i++) \
        cin >> a[i];
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
#define all(v) (v).begin(),(v).end()
#define asort(a) sort(a, a + n)
#define fl(i, n) for (int i = 0; i < n; i++)

void Arpan()
{
    int arpanjust = 0;
    fl(i, 10)
    {
        arpanjust++;
    }
    ll n;
    cin >> n;
    vi arr(n, 0), ans;
    input(arr,n);
    if (arr[0])
    {
        ans.pb(n + 1);
        for (ll i = 1; i <= n; i++)
        {
            ans.pb(i);
        }
    }
    else
    {
        ll ind = find(all(arr), 1) - arr.begin();
        for (ll i = 0; i < ind; i++)
        {
            ans.pb(i + 1);
        }
        ans.pb(n + 1);
        for (ll i = ind; i < n; i++)
        {
            ans.pb(i + 1);
        }
    }
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;

    return;
}

int main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        Arpan();
    }

    return 0;
}
