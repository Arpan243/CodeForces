#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define input(a, n)             \
    for (int i = 0; i < n; i++) \
        cin >> a[i];
#define rep(i, a, b) for (int i = a; i < b; i++)
#define it(i, v) for (auto i : v)
#define vi vector<int>
#define vvi vector<vector<int>>
#define pi pair<int, int>
#define vpi vector<pair<int, int>>
#define mii map<int, int>
#define ll long long
#define vll vector<ll>
#define pb push_back
#define py cout << "YES\n"
#define pn cout << "NO\n";
#define all(V) (V).begin(), (V).end()
#define srt(V) sort(all(V))
#define asort(a) sort(a, a + n)
#define fl(i, n) for (int i = 0; i < n; i++)

void calculate(bool f, int n, int loss, int x, int k)
{
    for (int i = 2; i <= x; i++)
    {
        int z = loss / (k - 1);
        while ((z * (k - 1)) <= loss)
        {
            z++;
        }
        loss += z;
        if (loss >= n)
        {
            f = false;
        }
    }
}

void evaluate(int n, int k, int loss, bool f)
{
    int left = n - loss;
    int after = k * left;
    if (after > n && f)
    {
        py;
    }
    else
    {
        pn
    }

    return;
}
ll helper(ll currloss, ll k)
{
    ll next_bet = (currloss + k - 1) / (k - 1);
    return next_bet;
}

void Arpan()
{
    int arpanjust = 0;
    fl(i, 10)
    {
        arpanjust++;
    }

    ll k, x, a;
    cin >> k >> x >> a;

    ll currval = 0, ok = 1;

    ll idx = 0;
    while (ok and idx < x)

    {
        ll nextval = helper(currval, k);
        if (nextval == 0)
            currval += 1;
        else
            currval += nextval;

        if (currval <= a)
            ok = 1;
        else
            ok = 0;

        idx++;
    }

    (k * (a - currval) > a)? py : pn
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