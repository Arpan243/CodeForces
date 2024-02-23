#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

void solve(){
    ll n,a;
    int div = 0, sum = 0,one = 0;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a;
            if(a == 1){
                one++;
                sum++;
            }
            else
                sum +=2;
        }
        if(sum % 2 == 0){
            div = sum/2;
            if(div % 2 == 0){
                cout<<"YES"<<endl;
            }
            else{
                if(one){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
        else{
            cout<<"NO"<<endl;
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