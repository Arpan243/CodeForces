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

    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2;

    int x_diff = x1 - x2;
    int y_diff = y1 - y2;

    if (x_diff != 0 and y_diff != 0)
    {
        x3 = x1;
        y3 = y2;
        x4 = x2;
        y4 = y1;
    }
    else if (x_diff != 0)
    {
        x3 = x1;
        y3 = y1 + abs(x_diff);
        x4 = x2;
        y4 = y2 + abs(x_diff);
    }
    else
    {
        x3 = x1 + abs(y_diff);
        y3 = y1;
        x4 = x2 + abs(y_diff);
        y4 = y2;
    }

    if (x_diff != 0 and y_diff != 0 and abs(x_diff) != abs(y_diff))
        cout << -1 << endl;
    else
        cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;

    return;
}

int main()
{
    int t = 1;
    // cin >> t;
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