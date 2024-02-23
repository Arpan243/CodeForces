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
#define asort(a)            sort(a,a+n)
#define fl(i,n) for(int i=0;i<n;i++)





void Arpan() {
    int arpanjust=0;
    fl(i,10){
        arpanjust++;
    }

    int N, Q;
        cin >> N >> Q;

        string S;
        cin >> S;

        int current_count = 0;
        int max_count = 0;

        for (int i = 0; i < N; ++i) {
            if (i > 0 && S[i] == S[i - 1]) {
                current_count += 1;
            } else {
                current_count = 1;
            }

            max_count = max(max_count, current_count);
        }

        cout << max_count << " ";

        for (int q = 0; q < Q; ++q) {
            char c;
            cin >> c;
            S += c;

            if (c == S[S.size() - 2]) {
                current_count += 1;
            } else {
                current_count = 1;
            }

            max_count = max(max_count, current_count);
            cout << max_count << " ";
        }

        cout << endl;

    
    

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
