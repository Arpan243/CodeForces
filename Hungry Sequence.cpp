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
    int x, i, j, c = 0, f;

    cin >> x;

    for (i = 2;; i++)
    {
        f = 0;
        for (j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                f = 1;
                break;
            }
        }

        if (f == 0)
        {
            cout << i << " ";
            c++;
        }

        if (c == x)
            break;
    }

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
