// Flip Flop Sum

// You are given an array of n
//  integers a1,a2,…,an
// . The integers are either 1
//  or −1
// . You have to perform the following operation exactly once on the array a
// :

// Choose an index i
//  (1≤i<n
// ) and flip the signs of ai
//  and ai+1
// . Here, flipping the sign means −1
//  will be 1
//  and 1
//  will be −1
// .
// What is the maximum possible value of a1+a2+…+an
//  after applying the above operation?


#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

void solve(){
    int n;
    cin>>n;
    vi v(n);
    int a=0,b=0,prev=0,temp,sum=0;
    rep(i,0,n){
        cin>>temp;
        v.push_back(temp);
        if(temp==prev && prev==-1){
            b=1;
        }else if(temp==-1){
            a=1;
        }
        prev =temp;
        sum +=temp;
    }

    if(b==1){
        cout<<(sum+=4)<<endl;
    }else if(a==1){
        cout<<sum<<endl;
    }else{
        cout<<(sum-+4)<<endl;
    }
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