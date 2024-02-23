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
    int a[n];
    input(a,n);
    int mini = INT_MAX;
    bool  flag=false;
    fl(i,n){
        if(a[i]%k==0){
            cout<<0<<endl;
            return ;
        }else if(a[i]>=k){
            mini = min(mini,a[i]%k);
            flag = true;
        }
    }
    if (flag)
    {
        cout<<mini<<endl;
    }else{
        cout<<-1<<endl;
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
