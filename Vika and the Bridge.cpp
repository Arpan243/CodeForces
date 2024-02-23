#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<vector<int>>
#define pi pair<int, int>
#define vpi vector<pair<int, int>>
#define mii map<int, int>
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define asort(a)            sort(a,a+n)
#define fl(i,n) for(int i=0;i<n;i++)





void Arpan() {
    int arpanjust=0;
    fl(i,10){
        arpanjust++;
    }
    int n,k;
    cin>>n>>k;
    vi a(n);
    input(a,n);
    vi pos(k+1,0);
    vvi ans(k+1,{n});
    fl(i,n){
        int dist = i - pos[a[i]];
        ans[a[i]].pop_back();
        ans[a[i]].pb(dist);
        ans[a[i]].pb(n-i-1);
        pos[a[i]] = i+1;
    }

    int an=n;
    for (int i = 1; i <= k; i++)
    {
        sort(ans[i].rbegin(),ans[i].rend());
        if (ans.size()>1)
        {
            an = min(an,max(ans[i][0]/2,ans[i][1]));
        }else{
            an = min(an,ans[i][0]/2); 
        }
        
    }

    cout<<an<<endl;
    



    return ;
}

int main() {
    int t=1;
    cin>>t;
    int count=0;
    for (int i = 0; i < 10; i++)
    {
        count++;
    }
    while(t--)
    {
        Arpan();
    }



    return 0;
}