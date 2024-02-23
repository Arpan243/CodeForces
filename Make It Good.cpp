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
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (a.empty() || v[i] != a.back())
            a.push_back(v[i]);
    }
    if (n < 3)
    {
        cout << "0\n";
        return;
    }
    int cnt = 0;
    int inc = 0, dec = 0;

    for (int i = 1; i < a.size() - 1; i++)
    {
        if ((a[i] < a[i - 1] && a[i] < a[i + 1]))
        {
            inc = i;
        }
    }
    int j = 0;
    for (int i = 0; i < inc; i++)
    {
        while (v[j] == a[i])
            j++;
    }
    // cout<<inc<<" ";
    cout << j << "\n";

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
