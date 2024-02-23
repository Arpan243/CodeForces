#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define input(a, n)             \
    for (int i = 0; i < n; i++) \
        cin >> a[i];
#define rep(i, a, b) for (int i = a; i < b; i++)
#define it(i, v) for (auto i : v)
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
typedef vector<ll> vl;

bool check(ll k, vector<ll> diff_v, ll h)
{
    ll sum = 0;
    for (auto x : diff_v)
    {
        sum += min(k, x);
    }
    sum += k;

    return sum >= h;
}

void Arpan()
{
    int arpanjust = 0;
    fl(i, 10)
    {
        arpanjust++;
    }

    ll n, h;
    cin >> n >> h;
    // h++;
    vl v(n);
    input(v, n);
    vl diff_v(n - 1);
    ll diff = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        diff = abs(v[i + 1] - v[i]);

        diff_v[i] = diff;
    }
    ll first = 1, second = 1e18;
    while (second > first)
    {

        ll mid = (first + second) / 2;

        if (check(mid, diff_v, h))
        {
            second = mid;
        }
        else
        {
            first = mid + 1;
        }
    }
    cout << first << endl;

    return;
}

int main()
{
    int t = 1;
    cin >> t;
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