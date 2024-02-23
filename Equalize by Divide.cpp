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
    int cnt1 = 0;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        if (v[i] == 1)
        {
            cnt1++;
        }
    }
    if (cnt1 == n)
    {
        cout << 0 << endl;
    }
    else if (cnt1 != 0)
    {
        cout << -1 << endl;
    }
    else
    {
        vector<pair<int, int>> res;
        for (int i = 1; i <= n; i++)
        {
            res.push_back({v[i], i});
        }

        sort(res.begin(), res.end());
        vector<pair<int, int>> ans;

        while (res[0].first != res[n - 1].first)
        {
            int val = res[0].first;
            for (int i = 1; i < n; i++)
            {
                if (res[i].first != val)
                {
                    res[i].first = (res[i].first + val - 1) / val;
                    ans.push_back({res[i].second, res[0].second});
                }
            }
            sort(res.begin(), res.end());
        }
        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i].first << " " << ans[i].second << endl;
            ;
        }
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