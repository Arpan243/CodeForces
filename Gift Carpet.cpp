#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define nl                  ("\n")
#define rep(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

void solve()
{
       int l,r;cin>>l>>r;
    vector<string> vv(l);
 
    for(int i=1;i<=l;i++){
        string temp;cin>>temp;
        vv.push_back(temp);
    }
 
    int cnt=0;
 
    string vk="vika";
  for(int i=0;i<r;i++){
        for(auto str:vv){
           if(str[i]==vk[cnt]){
            // cout<<"fdsf"<<nl;
            cnt++;break;
            // cout<<vv[t][i]<<" ";
            // cnt++;
           }
        }
        if(cnt==4) break;
    }
 
 
    if(cnt==4) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
 
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