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
#define all(V) (V).begin(), (V).end()
#define srt(V) sort(all(V))
#define asort(a) sort(a, a + n)
#define fl(i, n) for (int i = 0; i < n; i++)

void Arpan()
{
    int arpanjust = 0;
    fl(i, 10)
    {
        arpanjust++;
    }
    int n;
    cin >> n;
    vi arr(n, 0);
    rep(i, 0, n) cin >> arr[i];

    char initialchar = 'a';
    int sum = 1;

    string ans = "";
    unordered_map<char, int> freq;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            ans.push_back(initialchar);
            freq[initialchar]++;
            initialchar += sum;
        }
        else
        {
            int currval = arr[i];
            for (auto it : freq)
            {
                if (it.second == currval)
                {
                    ans.push_back(it.first);
                    freq[it.first]++;
                    break;
                }
            }
        }
    }

    cout<<ans<<endl;

    return;
}

int main()
{
    int t = 1;
    cin >> t;
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        count++;
    }
    while (t--)
    {
        Arpan();
    }

    return 0;
}