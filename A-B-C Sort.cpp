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
    int a[n + 1];
    input(a, n);
    int x = 0, i = 0;
    bool no = false;
    if (n % 2)
    {
        x = a[0];
        i = 1;
    }

    for (; i <= n - 1; i += 2)
    {
        if (a[i] >= x && a[i + 1] >= x)
        {
            x = max(a[i], a[i + 1]);
        }
        else
        {
            no = true;
        }
        // cout<<i <<" "<<i+1;
    }

    if (no)
        pn else py

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