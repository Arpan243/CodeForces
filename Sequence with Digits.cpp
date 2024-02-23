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

bool Arpan_helper(long long int n)
{

    while (n)
    {
        if (n % 10 == 0)
        {
            return true;
        }
        n /= 10;
    }

    return false;
}
long long int cal(long long int n)
{
    long long int mx = 0, mn = 9;
    if (n == 0)
        return 0;
    while (n)
    {
        mx = max(mx, n % 10);
        mn = min(mn, n % 10);
        n /= 10;
    }
    return mx * mn;
}

void Arpan()
{
    long long int n, k;
    cin >> n >> k;
    long long int last = 0;
    long long int st = n;
    for (int i = 0; i < k - 1; i++)
    {
        st = st + cal(st);
        if (Arpan_helper(st))
        {

            break;
        }
    }
    cout << st << endl;

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
