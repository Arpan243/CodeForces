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

void Arpan()
{
    long long int n;
    cin >> n;
    vector<long long int> cnt(n + 10);
    for (int i = 0; i < n; i++)
    {
        long long int x;
        cin >> x;
        cnt[x]++;
    }
    long long int ans = 0;
    long long int ex = 0;
    for (int i = 1; i <= n; i++)
    {
        cnt[i] += ex;
        ans += cnt[i] / i;
        ex = cnt[i] % i;
    }
    cout << ans << endl;

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
