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
    ll a[n];
    input(a, n);
    asort(a);

    ll ans[n + 1] = {0};
    if (n % 2 == 0)
    {
        ll k = n - 1;
        for (ll i = 0; i < n / 2; i++)
        {
            ans[k--] = a[n - 1 - i];
            ans[k--] = a[i];
        }
    }
    else
    {
        ll k = n - 1;
        ans[0] = a[n / 2];
        for (ll i = 0; i < n / 2; i++)
        {
            ans[k--] = a[n - 1 - i];
            ans[k--] = a[i];
        }
    }

    for (ll i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";

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
