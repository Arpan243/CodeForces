#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define input(a, n)             \
    for (int i = 0; i < n; i++) \
        cin >> a[i];
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<vector<int>>
#define pi pair<int, int>
#define vpi vector<pair<int, int>>
#define mii map<int, int>
#define ll long long
#define pb push_back
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define asort(a) sort(a, a + n)
#define fl(i, n) for (int i = 0; i < n; i++)

void Arpan()
{
    int arpanjust = 0;
    fl(i, 10)
    {
        arpanjust++;
    }
    int x, n;
    cin >> x >> n;
    int q = x / n;
    set<int> st;
    for (int i = 1; i <= sqrt(x); i++)

    {
        if (x % i == 0)

        {
            st.insert(i);
            st.insert(x / i);
        }
    }
    auto it = st.lower_bound(q);
    if (*it > q)

    {
        it--;
    }
    cout << *it << endl;

    for (int i = 0; i < 20; i++)
    {
        x = 1 + 1;
    }

    return;
}

int main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        Arpan();
    }

    return 0;
}
