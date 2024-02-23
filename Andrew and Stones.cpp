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
    int a[n];
    input(a, n);
    if (n == 3 && a[1] % 2)
    {
        cout << -1 << endl;
        return;
    }
    int k = 1;
    while (k < n - 1 && a[k] == 1)
        k++;
    if (k == n - 1)
    {
        cout << -1 << endl;
        return;
    }
    ll ans = 0;
    for (int i = 1; i < n - 1; i++)
    {
        ans += (a[i] + 1) / 2;
    }
    cout << ans << endl;

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
