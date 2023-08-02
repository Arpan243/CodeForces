// Polycarp and the Day of Pi
// On March 14, the day of the number π
//  is celebrated all over the world. This is a very important mathematical constant equal to the ratio of the circumference of a circle to its diameter.

// Polycarp was told at school that the number π
//  is irrational, therefore it has an infinite number of digits in decimal notation. He wanted to prepare for the Day of the number π
//  by memorizing this number as accurately as possible.

// Polycarp wrote out all the digits that he managed to remember. For example, if Polycarp remembered π
//  as 3.1415
// , he wrote out 31415.

// Polycarp was in a hurry and could have made a mistake, so you decided to check how many first digits of the number π
//  Polycarp actually remembers correctly.

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

void solve(){
    string s;
    cin>>s;
    int c =0;
    string str = "314159265358979323846264338327";
    rep(i,0,s.size()){
        if(s[i]==str[i]){
            c++;
        }else{
            break;
        }
    }
    cout<<c<<endl;
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