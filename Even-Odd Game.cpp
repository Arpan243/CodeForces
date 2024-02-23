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

    int n;
    cin >> n;
    vector<ll> e;
    vector<ll> o;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
            e.pb(x);
        else
            o.pb(x);
    }
    sort(e.begin(), e.end(), greater<>());
    sort(o.begin(), o.end(), greater<>());
    if (o.size() == 0)
    {
        cout << "Alice"
             << "\n";
        return;
    }
    if (e.size() == 0 && o.size() == 1)
    {
        cout << "Tie"
             << "\n";
        return;
    }
    if (e.size() == 0 && o.size() > 1)
    {
        cout << "Bob"
             << "\n";
        return;
    }
    int i = 0, j = 0;
    int p = e.size();
    int q = o.size();
    int c = 0;
    ll t1 = 0, t2 = 0;
    while (i < p && j < q)
    {
        if (c == 0)
        {
            if (e[i] >= o[j])
            {
                t1 += e[i];
                i++;
            }
            else
            {
                j++;
            }
            c = 1;
        }
        else
        {
            if (e[i] <= o[j])
            {
                t2 += o[j];
                j++;
            }
            else
            {
                i++;
            }
            c = 0;
        }
    }
    vector<ll> other;
    for (int x = i; x < p; x++)
        other.push_back(e[x]);
    for (int x = j; x < q; x++)
        other.push_back(o[x]);
    for (int x = 0; x < (int)other.size(); x++)
    {
        if (c == 0)
        {
            if (other[x] % 2 == 0)
                t1 += other[x];
            c = 1;
        }
        else
        {
            if (other[x] % 2 == 1)
                t2 += other[x];
            c = 0;
        }
    }
    if (t1 > t2)
        cout << "Alice";
    else if (t1 == t2)
        cout << "Tie";
    else
        cout << "Bob";
    cout << "\n";

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