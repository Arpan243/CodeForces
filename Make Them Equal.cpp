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
    char ch;
    string s;
    cin >> n >> ch >> s;
    bool ok = true;
    ll in = -1;
    fl(i, n)
    {
        if (s[i] == ch)
            in = i;
        if (s[i] != ch)
            ok = false;
    }
    if (ok)
        cout << "0\n";
    else if (in == -1)
    {
        cout << "2\n"
             << n - 1 << " " << n << "\n";
    }
    else if (in == n - 1)
    {
        cout << "1\n"
             << in + 1 << "\n";
    }
    else if (in >= n / 2)
    {

        cout << "1\n"
             << in + 1 << "\n";
    }
    else
    {
        cout << "2\n"
             << n - 1 << " " << n << "\n";
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
