#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define rep(i, a, b) for (int i = a; i < b; i++)
#define it(i,v) for(auto i : v)
#define vi vector<int>
#define vvi vector<vector<int>>
#define pi pair<int, int>
#define vpi vector<pair<int, int>>
#define mii map<int, int>
#define ll long long
#define vll vector<ll>
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

    int n,k;cin>>n>>k;
    while(k>3)
    {
        cout<<"1 ";
        k--;
        n--;
    }
 
    if(n&1)
    {
        cout<<1<<" "<<n/2<<" "<<n/2;
    }
    else{
        if(n%4==0)
        {
            cout<<n/4<<" "<<n/4<<" "<<n/2;
        }
        else{
           cout<<2<<" "<<(n/2)-1<<" "<<(n/2)-1;
        }
    }
 
 
 
    cout<<"\n";

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