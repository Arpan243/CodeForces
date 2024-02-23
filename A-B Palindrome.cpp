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
    int a, b;
    cin >> a >> b;
    int c = 0;
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            a--;
        if (s[i] == '1')
            b--;
        if (s[i] == '?')
            c++;
    }
    // cout<<"in "<<a<<" "<<b<<"\n";
    if (c == 0)
    {
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] != s[n - 1 - i])
            {
                cout << -1 << "\n";
                return;
            }
        }
        if (a > 0 || b > 0)
        {
            cout << -1 << "\n";
            return;
        }
        cout << s << "\n";
        return;
    }
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] == '?' && s[n - i - 1] != '?')
        {
            if (s[n - i - 1] == '0' && a > 0)
            {
                s[i] = '0';
                a--;
            }
            else if (s[n - i - 1] == '0' && a == 0)
            {
                cout << -1 << "\n";
                return;
            }
            else if (s[n - i - 1] == '1' && b > 0)
            {
                s[i] = '1';
                b--;
            }
            else
            {
                cout << -1 << "\n";
                return;
            }
        }
        else if (s[n - i - 1] == '?' && s[i] != '?')
        {
            if (s[i] == '0' && a > 0)
            {
                s[n - i - 1] = '0';
                a--;
            }
            else if (s[i] == '0' && a == 0)
            {
                cout << -1 << "\n";
                return;
            }
            else if (s[i] == '1' && b > 0)
            {
                s[n - i - 1] = '1';
                b--;
            }
            else
            {
                cout << -1 << "\n";
                return;
            }
        }
    }
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] == '?' && s[n - i - 1] == '?')
        {
            if (a >= 2)
                s[i] = '0', s[n - i - 1] = '0', a -= 2;
            else if (b >= 2)
                s[i] = '1', s[n - i - 1] = '1', b -= 2;
            else
            {
                cout << -1 << "\n";
                return;
            }
        }
    }
    if (n % 2 == 1 && s[n / 2] == '?')
    {
        if (a > 0)
            s[n / 2] = '0', a--;
        else if (b > 0)
            s[n / 2] = '1', b--;
        else
        {
            cout << -1 << "\n";
            return;
        }
    }
    if (a > 0 || b > 0)
    {
        cout << -1 << "\n";
        return;
    }
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - 1 - i])
        {
            cout << -1 << "\n";
            return;
        }
    }
    cout << s << "\n";
    return;

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
