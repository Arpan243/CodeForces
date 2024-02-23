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

    long long n;
    cin>>n;
    string a;
    cin>>a;
    int i1,i2;
    fl(i,n){
        if (a[i]=='B')
        {
            i1=i;
            break;
        }
        
    }
    for (int i = n-1; i >= 0; i--)
    {
        if (a[i]=='B')
        {
            i2=i;
            break;
        }
    }
    cout<<i2-i1+1<<endl;


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