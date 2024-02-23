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

    int n;
    cin >> n;
    int flag = 0;
    int b[n + 2];
    long long int sum = 0;
    for (int i = 0; i < n + 2; i++)
    {
        cin >> b[i];
        sum += b[i];
    }
    int f = -1;
    sort(b, b + n + 2);
    long long int m = b[n + 1];
    sum = sum - b[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        if (sum - b[i] == m)
        {
            f = i;
            break;
        }
    }
    if (f != -1)
    {
        flag = 1;
        for (int i = 0; i < n + 1; i++)
        {
            if (i == f)
                continue;
            else
            {
                cout << b[i] << " ";
            }
        }
        cout << endl;
        return ;
    }
    else
    {
        sum = sum - b[n];
        long long int s = 0;
        for (int i = 0; i < n; i++)
        {
            s = s + b[i];
        }
        if (s == b[n])
        {
            flag = 1;
            for (int i = 0; i < n; i++)
                cout << b[i] << " ";
            cout << endl;
        }
    }
    if (flag == 0)
        cout << -1 << endl;

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