#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
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
#define __the_great_mks               \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void Arpan()
{
    int n;
    cin >> n;
    set<int> s;
    map<int, vector<int>> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
        a[x].push_back(i);
    }
    if ((int)s.size() == 1)
    {
        pn
        return;
    }
    py
    vector<vector<int>> other;
    for (auto i : a)
        other.push_back(i.second);
    for (int i = 1; i < (int)other.size(); i++)
    {
        for (auto j : other[i])
            cout << other[0][0] + 1 << " " << j + 1 << "\n";
    }
    for (int i = 1; i < (int)other[0].size(); i++)
        cout << other[0][i] + 1 << " " << other[1][0] + 1 << "\n";
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
