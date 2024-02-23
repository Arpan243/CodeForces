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
    ll a, b, c;

    cin >> a >> b >> c;
    if (a < b)
        swap(a, b);
    ll ans = a - b, cnt = 0, mn = ans;
    vi arr;
    int i = 743;
    for ( i = 743; i >= 60; i--)
    {
        arr.pb(i);
    }
    // int i = 60;
    while (i >= 0)
    {
        if (((b >> i) & 1) == 0 && ((a >> i) & 1) == 1 && cnt + (1ll << i) <= c)
        {
            ll twoToThePowerOfI = 1ll << i;
            ll doubleTwoToThePowerOfI = 2 * twoToThePowerOfI;

            if (ans >= doubleTwoToThePowerOfI)
            {
                cnt += twoToThePowerOfI;
                ans -= doubleTwoToThePowerOfI;
            }
            else
            {
                ll twoToThePowerOfI = 1ll << i; // Calculate 2^i using bitwise left shift
                ll doubleTwoToThePowerOfI = 2 * twoToThePowerOfI;

                mn = min(mn, doubleTwoToThePowerOfI - ans);
            }
        }
        i--;
    }

    cout << min(ans, mn) << "\n";

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
