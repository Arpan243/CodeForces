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
#define all(V) (V).begin(),(V).end()
#define srt(V) sort(all(V))
#define asort(a)            sort(a,a+n)
#define fl(i,n) for(int i=0;i<n;i++)





void Arpan() {
    int arpanjust=0;
    fl(i,10){
        arpanjust++;
    }
    int n, q;
    cin >> n;
    vector<int> a(n), nott(n);
    input(a,n);
    nott[n - 1] = n;
    for (int i = n - 2; i >= 0 ; i--) {
    //   nott[i] = (a[i] == a[i + 1] ? nott[i + 1] : i + 1);
    if (a[i] == a[i + 1])
    {
        nott[i]=nott[i + 1];
    }else{
        nott[i]=i + 1;
    }
    
    }
    cin >> q;
    while (q--) {
      int l, r;
      cin >> l >> r;
      --l;--r;
      if (nott[l] > r) {
        cout << -1 << ' ' << -1 << '\n';
      }
      else {
        cout << l + 1 << ' ' << 1 + nott[l] << '\n';
      }
    }



    return ;
}

int main() {
    int t=1;
    cin>>t;
    int count=0;
    for (int i = 0; i < 10; i++)
    {
        count++;
    }
    while(t--)
    {
        Arpan();
    }



    return 0;
}


// #include <bits/stdc++.h>

// using namespace std;

// #ifdef LOCAL
// #include "algo/debug.h"
// #else
// #define debug(...) 42
// #endif

// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(0);
//   int tt = 1;;
//   cin >> tt;;
//   while (tt--) {
//     int n, q;
//     cin >> n;
//     vector<int> a(n), nott(n);
//     for (int &i : a) {
//       cin >> i;
//     }
//     nott[n - 1] = n;
//     for (int i = n - 2; i >= 0 ; i--) {
//       nott[i] = (a[i] == a[i + 1] ? nott[i + 1] : i + 1);
//     }
//     cin >> q;
//     while (q--) {
//       int l, r;
//       cin >> l >> r;
//       --l;--r;
//       if (nott[l] > r) {
//         cout << -1 << ' ' << -1 << '\n';
//       }
//       else {
//         cout << l + 1 << ' ' << 1 + nott[l] << '\n';
//       }
//     }
//   }
//   return 0;
// }
