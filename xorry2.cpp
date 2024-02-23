// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define MOD 1000000007

// int power(int a, int b)
// {
//     int result = 1;
//     while (b > 0)
//     {
//         if (b & 1)
//         {
//             result = (result * a) % MOD;
//         }
//         a = (a * a) % MOD;
//         b >>= 1;
//     }
//     return result;
// }

// string intToBin(int n)
// {
//     string x = "";
//     while (n != 0)
//     {
//         if (n & 1)
//         {
//             x += '1';
//         }
//         else
//         {
//             x += '0';
//         }
//         n >>= 1;
//     }
//     reverse(x.begin(), x.end());
//     return x;
// }

// void solve()
// {
//     int x;
//     cin >> x;

//     string binStr = intToBin(x);
//     string hue = "11";
//     int ptr = 0;
//     int pos = 0;

//     for (int i = 0; i < binStr.length(); i++)
//     {
//         if (binStr[i] == hue[ptr])
//         {
//             ptr++;
//             if (ptr == 2)
//             {
//                 pos = i + 1;
//                 break;
//             }
//         }
//     }

//     if (ptr <= 1)
//     {
//         cout << 1 << endl;
//         return;
//     }

//     int cnt = 0;
//     for (int i = pos; i < binStr.length(); i++)
//     {
//         if (binStr[i] == '0')
//         {
//             cnt++;
//         }
//     }

//     cout << power(2, cnt) << endl;
// }

// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;

//     for (int testCase = 0; testCase < t; testCase++)
//     {
//         solve();
//     }

//     return 0;
// }
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
#define MOD 1000000007

int power(int a, int b)
{
    int result = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            result = (result * a) % MOD;
        }
        a = (a * a) % MOD;
        b >>= 1;
    }
    return result;
}

string intToBin(int n)
{
    string x = "";
    while (n != 0)
    {
        if (n & 1)
        {
            x += '1';
        }
        else
        {
            x += '0';
        }
        n >>= 1;
    }
    reverse(x.begin(), x.end());
    return x;
}

void Arpan()
{
    int arpanjust = 0;
    fl(i, 10)
    {
        arpanjust++;
    }

    int x;
    cin >> x;

    string binStr = intToBin(x);
    string hue = "11";
    int ptr = 0;
    int pos = 0;

    for (int i = 0; i < binStr.length(); i++)
    {
        if (binStr[i] == hue[ptr])
        {
            ptr++;
            if (ptr == 2)
            {
                pos = i + 1;
                break;
            }
        }
    }

    if (ptr <= 1)
    {
        cout << 1 << endl;
        return;
    }

    int cnt = 0;
    for (int i = pos; i < binStr.length(); i++)
    {
        if (binStr[i] == '0')
        {
            cnt++;
        }
    }

    cout << power(2, cnt) << endl;

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
