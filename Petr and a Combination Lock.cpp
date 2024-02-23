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
    int n,m,sum;

    cin>>n;

    int a[n];
    input(a,n)

    //check all combinations of 0 and 1 of len n
    m=1<<n;
    for(int i=0;i<m;i++)
    {
        sum=0;
        for(int j=0;j<n;j++)
        {
            if((1<<j)&i) sum+=a[j];
            else sum-=a[j];
        }

        if(sum%360==0)
        {
            py
            return ;
        }
    }

    pn
    

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
