//  A+B
// You are given an expression of the form a+b
// , where a
//  and b
//  are integers from 0
//  to 9
// . You have to evaluate it and print the result.

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

void solve(){
    string s;
    cin>>s;
    int sum=0;
    sum += ( (int)s[0] -48);
    sum += ( (int)s[2] -48);
    cout<<sum<<endl;
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