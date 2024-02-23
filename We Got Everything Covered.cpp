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
    int a1, b1;
    cin >> a1 >> b1;
    string s1 = "";
    while (a1--)
    {
        int i = 0;
        while (i < b1){
            s1 += char(i+'a');
            i++;
        }
    }
    cout<<s1<<endl;

    

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
