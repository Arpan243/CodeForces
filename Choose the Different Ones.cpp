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
#define all(V) (V).begin(),(V).end()
#define srt(V) sort(all(V))
#define asort(a)            sort(a,a+n)
#define fl(i,n) for(int i=0;i<n;i++)





void Arpan() {
    int arpanjust=0;
    fl(i,10){
        arpanjust++;
    }
    ll s=1000000;
    
    int n,m,k;
    cin>>n>>m>>k;
    // cout<<"input"<<endl;
    vi a(n);
    vi b(m);
    input(a,n);
    input(b,m);
    
    // vector<int> cnt(s,0);
    // fl(i,n){
    //     cnt[a[i]] = 1;
    // }
    // fl(i,m){
    //     cnt[b[i]] = 1;
    // }
    // string ans="YES";
    // for (ll i = 1; i < k+1; i++)
    // {
    //     if (cnt[i]==0)
    //     {
    //         cout<<"NO"<<endl;
    //         return ;
    //     }
        
    // }
    // cout<<"YES"<<endl;
    set<int> set1, set2;
    for (int i : a) {
        if (i >= 1 && i <= k) {
            set1.insert(i);
        }
    }
    for (int i : b) {
        if (i >= 1 && i <= k) {
            set2.insert(i);
        }
    }

    int k1 = set1.size();
    int k2 = set2.size();
    if(k1<k/2 or k2<k/2){
        cout<<"NO"<<endl;
        return;
    }
    
    set<int> c;
    for(int i : set1){
        c.insert(i);
    }
    for(int i : set2){
        c.insert(i);
    }
    if (c.size()==k)
    {
        cout<<"YES"<<endl;
        
    }else{
        cout<<"NO"<<endl;
    }
    

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