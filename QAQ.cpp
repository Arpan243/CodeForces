#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

void solve()
{
    ll q = 0, qa = 0, qaq = 0;
    string s;
    cin >> s;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] == 'Q')
        {
            q++;
            qaq += qa;
        }
        else if (s[i] == 'A')
            qa += q;
    }
    cout << qaq << endl;

    // show
}

int main()
{
    int t;
    // cin >> t;
    // while (t--)
    {
        solve();
    }
}