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
#define asort(a)            sort(a,a+n)
#define fl(i,n) for(int i=0;i<n;i++)
#define __the_great_mks               \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);




void Arpan() {
    int n;
    ll cnt=1,ans=0;
    cin>>n;
    ll  a[n];
    fl(i,n){
        cin>>a[i];
    }
    asort(a);
    ll j=0;
    fl(i,n){
        while( j<n && a[i]+5>=a[j])
        {
            j++;
            ans=max(ans,j-i);
        }
    }
    cout<<ans<<endl;

    return ;
}

int main() {
    

    int t=1;
	// cin>>t;
	while(t--)
	{
		Arpan();
	}

    

    return 0;
}
