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
    int n, x;
    cin >> n >> x;
    vector<ll> a(n);
    input(a, n);
    srt(a);
    vector<ll> pre(n, 0);
    ll sum = 0;
    fl(i, n)
    {
        sum+=a[i];
        pre[i] = sum;
    }
    ll ans=0;
    for (int i = n-1; i >= 0; i--)
    {
        ll diff= x-pre[i];
        if (diff>=0 && diff/(i+1)>=0)
        {
            ans +=((diff/(i+1)) +1);
        }
        
    }

    cout<<ans<<endl;
    

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