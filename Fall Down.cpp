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

    ll n, m;
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    vector<vector<char>> ans(n, vector<char>(m, '.'));
    for (ll i = 0; i < m; i++)
    {
        ll sum = 0;
        for (ll j = 0; j < n; j++)
        {
            if (grid[j][i] == '*')
            {
                sum++;
            }
            else if (grid[j][i] == 'o')
            {
                ans[j][i] = 'o';
                for (ll k = 1; k <= sum; k++)
                {
                    ans[j - k][i] = '*';
                }
                sum = 0;
            }
        }
        if (sum)
        {
            for (ll k = 1; k <= sum; k++)
            {
                ans[n - k][i] = '*';
            }
        }
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cout << ans[i][j];
        }
        cout << endl;
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