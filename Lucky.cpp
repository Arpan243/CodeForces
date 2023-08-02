//  Lucky?
// A ticket is a string consisting of six digits. A ticket is considered lucky if the sum of the first three digits is equal to the sum of the last three digits. Given a ticket, output if it is lucky or not. Note that a ticket can have leading zeroes.

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

void solve()
{
    string s;
    cin >> s;
    int sum = 0;
    rep(i, 0, 3)
    {
        sum += ((int)s[i] - 48);
    }
    rep(i, 3, 6)
    {
        sum -= ((int)s[i] - 48);
    }
    if (sum == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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