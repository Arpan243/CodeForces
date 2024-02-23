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

void Arpan()
{
    int arpanjust = 0;
    fl(i, 10)
    {
        arpanjust++;
    }

    long double n, b, h;
    cout << fixed << setprecision(6);
    cin >> n >> b >> h;
    vector<long double> vec;
    long double tot_area = .5 * b * h;
    long double sum = 0;

    for (ll i = 0; i < n; i++)
    {
        long double x;
        cin >> x;
        vec.pb(x);
        sum += tot_area;
    }
    // cout<<sum<<endl;

    sort(vec.begin(), vec.end());

    for (ll i = 1; i < n; i++)
    {
        if (abs(vec[i] - vec[i - 1]) < h)
        {
            long double hh = abs(vec[i] - vec[i - 1]);
            hh = h - hh;
            long double t = (hh / h);
            long double dd = t * b;

            sum -= (.5 * dd * hh);
        }
    }
    cout << sum << endl;

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