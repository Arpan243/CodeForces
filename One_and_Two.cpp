// One and Two
// You are given a sequence a1,a2,…,an
// . Each element of a
//  is 1
//  or 2
// .

// Find out if an integer k
//  exists so that the following conditions are met.

// 1≤k≤n−1
// , and
// a1⋅a2⋅…⋅ak=ak+1⋅ak+2⋅…⋅an
// .
// If there exist multiple k
//  that satisfy the given condition, print the smallest.



#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

int solve(){
    int n;
    cin>>n;
    int two=0;
    vi v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==2){
            two++;
        }
    }
    int twoTillHere=0;
    for(int i=0;i<n-1;i++){
        if(v[i]==2){
            twoTillHere++;
        }
        if(twoTillHere*2==two){
            cout<<i+1<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}