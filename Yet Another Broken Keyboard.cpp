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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    s.push_back('#');
    set<char> c;
    for (int i = 0; i < k; i++)
    {
        char ch;
        cin >> ch;
        c.insert(ch);
    }
    int last = -1;
    ll total = 0;
    for (int i = 0; i <= n; i++)
    {
        if (c.count(s[i]) == 0)
        {
            int len = i - last - 1;
            total += ((ll)(len) * (len + 1LL)) / 2;
            last = i;
        }
    }
    cout << total;

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
