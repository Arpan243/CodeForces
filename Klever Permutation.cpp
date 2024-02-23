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

    int n, k;
    cin >> n >> k;
    vi v(n);
    vi a(k);
    a[0] = n; 
    a[1] = 1;
    fl(i,k) {
      int sign = (i % 2 == 0 ? -1 : 1);
        int move = 0, mn = n + 1, mx = 0;

        for (int j = i; j < n; j += k) {
            int temp =sign * move++;
            v[j] = a[i] + temp;
            mx = max(mx, v[j]);
            mn = min(mn, v[j]);
        }

        if (sign == -1 && i + 2 < k) {
            int ma =i + 2;
            a[ma] = mn - 1;
        } else if (i + 2 < k) {
            int na =i + 2;
            a[na] = mx + 1;
        }
    }

    fl(i,n) {
        cout << v[i] << ' ';
    }
    cout << '\n';


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
//     int n, k;
//     cin >> n >> k;
//     vector<int> v(n);
//     vector<int> a(k);
//     a[0] = n; 
//     a[1] = 1;
//     for (int i = 0; i < k; i++) {
//       int sign = (i % 2 == 0 ? -1 : 1), move = 0, mn = n + 1, mx = 0;
//       for (int j = i; j < n; j += k) {
//         v[j] = a[i] + sign * move++;
//         mx = max(mx, v[j]);
//         mn = min(mn, v[j]);
//       }
//       if (sign == -1) {
//         if (i + 2 < k) {
//           a[i + 2] = mn - 1;
//         }
//       }
//       else {
//         if (i + 2 < k) {
//           a[i + 2] = mx + 1;
//         }
//       }
//     }
//     for (int &it : v) {
//       cout << it << ' ';
//     }
//     cout << '\n';
//   }
//   return 0;
// }
