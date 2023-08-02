// A. Make it Beautiful

// An array a is called ugly if it contains at least one element which is equal to the sum of all elements before it. If the array is not ugly, it is beautiful.

// For example:
// the array [6,3,9,6]
//  is ugly: the element 9
//  is equal to 6+3
// ;
// the array [5,5,7]
//  is ugly: the element 5
//  (the second one) is equal to 5
// ;
// the array [8,4,10,14]
//  is beautiful: 8≠0
// , 4≠8
// , 10≠8+4
// , 14≠8+4+10
// , so there is no element which is equal to the sum of all elements before it.

// You are given an array a
//  such that 1≤a1≤a2≤⋯≤an≤100
// . You have to reorder the elements of a
//  in such a way that the resulting array is beautiful. Note that you are not allowed to insert new elements or erase existing ones, you can only change the order of elements of a
// . You are allowed to keep the array a
//  unchanged, if it is beautiful.

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi v(n);
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            m[v[i]]++;
        }
        if (m.size() == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            vector<int> ans1, ans2;
            for (auto x : m)
            {
                ans1.push_back(x.first);
                for (int i = 2; i <= x.second; i++)
                {
                    ans2.push_back(x.first);
                }
            }
            reverse(ans1.begin(), ans1.end());
            cout << "YES" << endl;
            for (auto x : ans1)
            {
                cout << x << " ";
            }
            for (auto x : ans2)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }
}