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
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define fl(i,n) for(int i=0;i<n;i++)
#define __the_great_mks               \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);




void Arpan() {
    
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll x=0;
    ll a=0;
    ll b=0;
    string sn="";
    bool ok=true;
    fl(i,n)
    {
        sn+=s[i];
        if(sn=="()"||sn=="(("||sn=="))"){
            b+=2;
            a++;
            sn="";
        }
        else if(sn.length()>1){
            if(s[i]==')'){
                b+=sn.length();
                a++;
                sn="";
            }
        }
    }
    cout<<a<<" "<<n-b<<"\n";

    return ;
}

int main() {
    

    int t=1;
	cin>>t;
	while(t--)
	{
		Arpan();
	}

    

    return 0;
}
