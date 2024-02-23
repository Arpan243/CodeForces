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
    int n;
    cin >> n;
    int b[n];
    rep(i, 0, n) cin >> b[i];

    int arr[n] = {0};
    arr[0] = b[0];
    bool flag = false;
    for (int i = 1; i < n; i++)
    {
        if (b[i] == 0)
        {
            arr[i] = arr[i - 1];
        }
        else
        {
            if ((arr[i - 1] - b[i]) >= 0)
            {
                flag = true;
                break;
            }
            else
            {
                // if (arr[i-1]-b[i]) is negative..
                arr[i] = arr[i - 1] + b[i];
            }
        }
    }

    if (flag == true)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout <<endl;
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
