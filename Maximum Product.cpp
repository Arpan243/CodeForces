#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
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
#define asort(a)            sort(a,a+n)
#define fl(i, n) for (int i = 0; i < n; i++)
#define __the_great_mks               \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void Arpan()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll ans = -1e18;
    for (int i = 0; i < 5; i++)
    {
        int aa, bb, cc, dd, ee;
        ee = (n - 1 + i) % n;
        dd = (n - 2 + i) % n;
        cc = (n - 3 + i) % n;
        bb = (n - 4 + i) % n;
        aa = (n - 5 + i) % n;
        ll val = a[aa] * a[bb] * a[cc] * a[dd] * a[ee];
        ans = max(ans, val);
    }
    cout << ans << "\n";

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
