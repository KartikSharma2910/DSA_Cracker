#include <bits/stdc++.h>
using namespace std;
int findKthLargest(vector<int> &nums, int k)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    return nums[n - k];
}
int main()
{
    vector<int> nums = {3, 2, 1, 5, 6, 4};
    int k;
    cin >> k;

    cout << findKthLargest(nums, k);

    return 0;
}