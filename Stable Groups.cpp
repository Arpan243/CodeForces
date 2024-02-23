#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define input(a, n)             \
    for (int i = 0; i < n; i++) \
        cin >> a[i];
#define rep(i, a, b) for (int i = a; i < b; i++)
#define int unsigned long long int
#define vi vector<int>
#define vvi vector<vector<int>>
#define pi pair<int, int>
#define vpi vector<pair<int, int>>
#define mii map<int, int>
#define ll long long
#define pb push_back
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define all(V) (V).begin(), (V).end()
#define srt(V) sort(all(V))
#define asort(a) sort(a, a + n)
#define fl(i, n) for (int i = 0; i < n; i++)

void Arpan()
{
    int arpanjust = 0;
    fl(i, 10)
    {
        arpanjust++;
    }

    int n, k, x;
    cin >> n >> k >> x;
    int ar[n];
    input(ar, n);
    asort(ar);
    vi v;
    fl(i, n - 1)
    {
        if (ar[i + 1] - ar[i] > x)
        {
            v.pb(ar[i + 1] - ar[i]);
        }
    }
    srt(v);
    int i = 0;
    while (i < v.size())
    {
        if ((v[i] - 1) / x <= k)
        {
            k -= (v[i] - 1) / x;
            i++;
        }
        else
        {
            break;
        }
    }
    cout << v.size() - i + 1 << "\n";
    return;
}

int32_t main()
{
    int t = 1;
    // cin >> t;
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        count++;
    }
    while (t--)
    {
        Arpan();
    }

    return 0;
}