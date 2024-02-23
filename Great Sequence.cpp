#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define endl ("\n")
#define int long long
#define pb push_back
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define rep(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


//Syntax to create a min heap for priority queue
//priority_queue <int, vector<int>, greater<int>>pq;

int32_t main(){
    fastio
    //cout<<setprecision(20)<<fixed ;
    int t=1;
    cin>>t;
    while(t--){
        int n, x;cin>>n>>x;
        vector<int>a(n);
        rep(i, n)cin>>a[i];
        sort(all(a));
        reverse(all(a));
        map<int, int>m;
        rep(i, n){
            m[a[i]]+=1;
        }
        // rep(i, n)cout<<m1[x*a[i]]<<endl;
        int ans = 0;
        for(int i = n-1;i>=0;i--){
            if(m[a[i]]){
            if(m[x*a[i]]){
                m[x*a[i]]--;
            }
            else{
                ans++;
            }
            m[a[i]]--;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}