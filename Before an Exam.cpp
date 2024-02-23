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

    ll i, j, n, time;
    ll a[35], b[35];

    while (cin >> n >> time)
    {
        ll min_time = 0, max_time = 0, sum_time = 0;
        vector<ll> v;
        for (i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
            min_time += a[i];
            max_time += b[i];
            v.push_back(a[i]);
            sum_time += a[i];
        }
        if (min_time <= time && time <= max_time)
        {
            cout << "YES\n";
            if (sum_time < time)
            {
                for (i = 0; i < n; i++)
                {
                    ll df = b[i] - a[i];
                    j = 1;
                    while (j <= df)
                    {
                        if (sum_time == time)
                            break;
                        sum_time++;
                        v[i]++;
                        j++;
                    }
                }
            }
            for (i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
        else
            cout << "NO\n";
    }

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
