/*
    Author Name: Akash Chanda Tushar(CSE,LU)
*/
#include<bits/stdc++.h>
#define   ll            long long int
#define   ull           unsigned long long
#define   endl          "\n"
#define   vi            vector<int>
#define   vll           vector<ll>
#define   pb            push_back
#define   eb            emplace_back
#define   all(p)        p.begin(),p.end()
#define   F             first
#define   S             second
#define   mp            make_pair
#define   MOD           1000000007
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        ll n,a,mn=INT_MAX,c=0,f=1,g=0,cnt=0;
        cin>>n;
        vector<pair<ll,ll>>v;
 
        for(int i=1;i<=n;i++){
            cin>>a;
            v.pb(mp(a,i));
        }
        sort(all(v));
 
 
        for(int  i=0;i<v.size();i++){
            if(i==v.size()-1){
                if(v[i].S!=n)cnt++;
                if(g==-1){
                   if(abs(v[i].S-1)>0)cnt++;
                }
                else {
                        if(abs(f-1)>0)cnt++;
                }
 
                 mn=min(cnt,mn);
                 break;
 
            }
            if(c==0){
                f=v[i].S;
                c++;
            }
            if(v[i].F==v[i+1].F){
                if((abs(v[i].S-v[i+1].S))-1>=1)cnt++;
                g=0;
            }
            else{
                if(v[i].S!=n)cnt++;
                if(abs(f-1)>0)cnt++;
                mn=min(cnt,mn);
                f=1;
                cnt=0;
                c=0;
                g=-1;
            }
        }
       cout<<mn<<endl;
 
    }
 
return 0;
}
 
 