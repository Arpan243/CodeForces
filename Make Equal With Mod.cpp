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
#define vll vector<ll>
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

    ll n;
    cin >> n;
    vll v(n);
    input(v, n);
    if (n == 1)
    {
        py return;
    }
    unordered_map<ll, ll> mpp;
    for (auto &aa : v)
    {
        mpp[aa]++;
    }
    if (mpp[1] == 0)
    {
        py
    }
    else if (mpp[1] && mpp[0])
    {
        pn
    }
    else if (mpp[1] == n)
    {
        py
    }
    else if (mpp[1] && mpp[2])
    {
        pn
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (mpp[v[i] - 1] == 0)
                continue;
            else
            {
                pn return;
            }
        }
        py
    }

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