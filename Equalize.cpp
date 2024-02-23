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
#define cop(se, l) copy(se.begin(), se.end(), back_inserter(l));


int helper(vector<int> l,int k,int n){
    int ans = 1;
    fl(i,n)
    {
        int en = l[i] + k - 1;
        auto it = upper_bound(l.begin() + i, l.end(), en);
        int dist = distance(l.begin() + i, it);
        ans = max(ans, dist);
    }
    return ans;
}

void Arpan()
{
    int arpanjust = 0;
    fl(i, 10)
    {
        arpanjust++;
    }

    int n;
    cin >> n;
    vector<int> v(n);
    set<int> se;

    input(v, n);
    fl(i, n)
    {
        se.insert(v[i]);
    }
    vector<int> l;
    cop(se, l) int k = n;
    n = l.size();
    int ans = helper(l,k,n);
    

    

    cout << ans << endl;

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