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
    int n, k, m, cnt = 0;
    string temp, s, ans;
    cin >> n >> k >> m >> temp;

    for (auto el : temp) {
        if (k > (int)el - 97) {
            s.push_back(el);
        }
    }

    if (s.empty()) {
        cout << "NO\n";
        for (int i = 0; i < n; ++i) {
            cout << 'a';
        }cout<<"\n";
        return;
    }

    map<char, int> mp;

    for (auto el : s) {
        mp[el]++;
        if (mp.size() == k) {
            ans.push_back(el);
            ++cnt;
            mp.clear();
        }
    }

    if (cnt >= n) {
        cout << "YES\n";
    return;
    }

    cout << "NO\n";

    if (mp.empty()) {
        while (ans.size() < n) {
            ans.push_back(s[s.size()-1]);
        }
        cout << ans;
        cout<<"\n";
        return;
    }

    char g;

    for (char c = 'a'; c < char(97 + k); ++c) {
        if (mp[c] == 0) {
            g = c;
            break;
        }
    }

    while (ans.size() < n) {
        ans.push_back(g);
    }

    cout << ans<<"\n";


    return;
}

int main()
{

    int t = 1;
    cin >> t;
    int count=0;
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
