#include <bits/stdc++.h>
using namespace std;

int KthSmallestElement(vector<int> &nums, int k)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());

    return nums[k - 1];
}

int main()
{
    vector<int> nums = {3, 2, 1, 5, 6, 4};
    int k;
    cin >> k;

    cout << KthSmallestElement(nums, k);

    return 0;
}