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

    ll m,k,a1,ak;
    cin>>m>>k>>a1>>ak;

    ll need=0;
    if (m%k<a1)
    {
        a1 -= m%k;
        m -= m%k;
    }else{
        need += m%k - a1;
        a1=0;
    }

    ak += a1/k;
    need+= max(0ll,m/k-ak);

    cout<<need<<endl;
    

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