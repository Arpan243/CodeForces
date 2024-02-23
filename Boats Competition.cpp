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
    map<int, int> mp;
    fl(i,n)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    int maxi = 0;
    for (int i = 1; i <= (2 * n); i++)
    {
        int total = 0;
        for (auto j : mp)
        {
            int other = i - j.first;
            if (other >= 1 && mp.count(other))
                total += min(j.second, mp[other]);
        }
        total /= 2;
        // cout<<i<<" "<<total<<"\n";
        maxi = max(maxi, total);
    }
    cout << maxi << "\n";

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
