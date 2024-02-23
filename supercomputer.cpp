#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<vector<int>>
#define pi pair<int, int>
#define vpi vector<pair<int, int>>
#define mii map<int, int>
#define pb push_back
#define __ArpanKarjee                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

// Function to update a binary indexed tree (Fenwick tree)
void update(vector<int> &BIT, int index, int value)
{
    for (; index < BIT.size(); index += index & -index)
    {
        BIT[index] += value;
    }
}

// Function to query the prefix sum up to a given index in the binary indexed tree
int query(const vector<int> &BIT, int index)
{
    int sum = 0;
    for (; index > 0; index -= index & -index)
    {
        sum += BIT[index];
    }
    return sum;
}

// Function to find the index of the first occurrence of 1 within a specified range [l, r]
int findFirstOne(const vector<int> &arr, int l, int r)
{
    int n = arr.size();

    // Create a binary indexed tree of size n + 1
    vector<int> BIT(n + 1, 0);

    // Initialize the binary indexed tree with the input array
    for (int i = 1; i <= n; ++i)
    {
        update(BIT, i, arr[i - 1]);
    }

    // Query the binary indexed tree to find the leftmost occurrence of 1 in the specified range
    int leftmostOne = query(BIT, r + 1) - query(BIT, l);

    if (leftmostOne == 0)
    {
        return -1; // If no 1 is found in the specified range
    }

    // Binary search to find the index of the leftmost occurrence of 1
    int left = l, right = r;
    while (left < right)
    {
        int mid = left + (right - left) / 2;
        int midValue = query(BIT, mid + 1) - query(BIT, l);
        if (midValue > 0)
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }

    return left;
}

int32_t main()
{
    __ArpanKarjee;

    int n, m;
    cin >> n >> m;
    vi arr(m, 0);
    unordered_set<int> st;

    rep(i, 0, m)
    {
        cin >> arr[i];
        st.insert(arr[i]);
    }

    vi prefx(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        if (st.find(i) == st.end())
        {
            // it means the current value is not present in the set , so it is unreserved ....
            prefx[i] = 1; // it is available ..
        }
    }

    unordered_map<int, int> mp;

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int result = findFirstOne(prefx, l, r);
        cout << result << endl;
    }

    return 0;
}