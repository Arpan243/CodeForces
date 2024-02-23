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

    string s1, s2;
    cin >> s1 >> s2;
    ll in1 = s1.length() - 1;
    ll in2 = s2.length() - 1;
    string ans = "";
    if (s1 == s2)
    {
        cout<<"0"<<endl;
        return;
    }
    else if (stoll(s2) < stoll(s1))
    {
        cout<<"-1"<<endl;
        return;
    }
    while (in1 >= 0)
    {
        if (s1[in1] > s2[in2])
        {
            if (s2[in2 - 1] == '1')
            {
                char ch = (char)(10 + ((s2[in2] - '0') - (s1[in1] - '0')) + '0');
                ans = ch + ans;
                in2 -= 2;
                in1--;
            }
            else
            {
                cout << "-1\n";
                return;
            }
        }
        else
        {
            char ch = (char)(((s2[in2] - '0') - (s1[in1] - '0')) + '0');
            ans = ch + ans;
            in1--;
            in2--;
        }
        if (in2 < 0 && in1 >= 0)
        {
            cout << "-1\n";
            return;
        }
    }
    for (int i = in2; i >= 0; i--)
        ans = s2[i] + ans;
    in1 = 0;
    for (in1 = 0; in1 < ans.length(); in1++)
    {
        if (ans[in1] != '0')
            break;
    }
    for (int i = in1; i < ans.length(); i++)
        cout << ans[i];
    cout << "\n";

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