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
#define ull             unsigned long long
#define pb push_back
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define all(V) (V).begin(), (V).end()
#define srt(V) sort(all(V))
#define asort(a) sort(a, a + n)
#define fl(i, n) for (int i = 0; i < n; i++)

void Arpan()
{
    int arpanjust = 0;
    fl(i, 10)
    {
        arpanjust++;
    }

    int n, x;
    cin >> n >> x;
    int a[n];
    int M, m1, m2;
    ull sum = 0, sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum % x != 0)
    {
        cout << n << endl;
    }
    else
    {
        m1 = m2 = n;
        sum1 = sum2 = sum;
        for (int i = n - 1; i >= 0; i--)
        {
            if ((sum1 - a[i]) % x != 0)
            {
                m1--;
                sum1 -= a[i];
                break;
            }
            else
            {
                sum1 -= a[i];
                m1--;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if ((sum2 - a[i]) % x != 0)
            {
                m2--;
                sum2 -= a[i];
                break;
            }
            else
            {
                sum2 -= a[i];
                m2--;
            }
        }
        M = max(m1, m2);
        sum = max(sum1, sum2);
        if (sum % x != 0)
        {
            cout << M << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

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