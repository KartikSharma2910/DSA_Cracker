#include <bits/stdc++.h>
using namespace std;

int maxSubarray(vector<int> &nums)
{
    int curSum = 0;
    int maxSum = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        curSum += nums[i];
        if (curSum < 0)
        {
            curSum = 0;
        }
        maxSum = max(curSum, maxSum);
    }
    return maxSum;
}

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << maxSubarray(nums);

    return 0;
}