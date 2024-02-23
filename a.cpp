#include <bits/stdc++.h>
class Solution
{
public:
    int minimumCost(vector<int> &nums)
    {
        int ans = nums[0];
        int smallest = INT_MAX;
        int secondSmallest = INT_MAX;

        for (size_t i = 1; i < nums.size(); ++i)
        {
            if (nums[i] < smallest)
            {
                secondSmallest = smallest;
                smallest = nums[i];
            }
            else if (nums[i] < secondSmallest)
            {
                secondSmallest = nums[i];
            }
        }
        ans = ans + smallest;
        ans = ans + secondSmallest;
        return ans;
    }
};
using namespace std;
int main()
{

    return 0;
}
