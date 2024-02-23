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

ll sum(ll n1) {
    return (n1*(n1+1))/2;
}

void Arpan()
{
    int arpanjust = 0;
    fl(i, 10)
    {
        arpanjust++;
    }
    ll n, x, y, gcd;
    cin >> n >> x >> y;
    ll a = n / x;
    ll b = n / y;
    ll lcm = (x * y) / __gcd(x, y);
    ll c = n / lcm;
    ll a1 = a - c;
    ll b1 = b - c;
    cout << (sum(n) - sum(n - a1)) - sum(b1) << endl;

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
