#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define nl ("\n")
#define rep(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

void solve()
{
    string s;
    cin >> s;
    s.erase(unique(s.begin(), s.end()), s.end());
    int ans = 0;
    for (auto c : s)
    {
        if (c == '0')
            ++ans;
    }
    cout << min(ans, 2) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}