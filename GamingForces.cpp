#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, num_1 =0, a;
        cin >> n;
       
        rep(i, 0, n) {
            cin>>a;
            if(a==1){
                num_1++;
            }
        }
        cout<< n - (num_1/2) << endl;
    }
}