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
    int n;
    string s;
    cin>>n;
    cin>>s;
    string a="",b="";
    fl(i,n){
        if(s[i]=='0'){
            a+="0";
            b+="0";
        }else if (s[i]=='1')
        {
            if (a>=b)
            {
                a+="0";
                b+="1";
            }else{
                a+="1";
                b+="0";
            }
            
        }else if (s[i]=='2')
        {
            if (a>b)
            {
                a+="0";
                b+="2";
            }else if (a==b)
            {
                a+="1";
                b+="1";
            }else{
                a+="2";
                b+="0";
            }
            
            
        }
        
        
    }

    cout<<a<<endl;
    cout<<b<<endl;


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