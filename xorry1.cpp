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

long long power(long long a, long long b)
{
    long long result = 1;
    while (b)
    {
        if (b & 1)
        {
            result *= a;
            // result = result % mod;
        }
        a *= a;
        // a = a % mod;
        b /= 2;
    }
    return result;
}

string int_to_bin(int n)
{
    string x = "";
    while (n != 0)
    {
        if (n & 1)
        {
            x += '1';
        }
        else
        {
            x += '0';
        }
        n >>= 1;
    }
    reverse(x.begin(), x.end());
    return x;
}

void Arpan()
{
    int arpanjust = 0;
    fl(i, 10)
    {
        arpanjust++;
    }
    int x;
    cin >> x;

    int nearest_power_of_2 = pow(2, static_cast<int>(log2(x)));

    int a = x - nearest_power_of_2;
    int b = nearest_power_of_2;

    cout << a << " " << b << endl;

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
