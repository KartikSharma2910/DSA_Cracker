#include <iostream>
#include <vector>
using namespace std;

vector<int> repetedMissingNumber(vector<int> &nums)
{
    int n = nums.size();
    int missingNum = 0;
    int repeatedNum = 0;
    vector<int> ans;
    int sum = n * (n + 1) / 2;
    int square = (n * (n + 1) * (2 * n + 1)) / 6;

    for (int i = 0; i < n; i++)
    {
        sum = sum - nums[i];
        square = square - (nums[i] * nums[i]);
    }

    missingNum = (sum + (square / sum)) / 2;
    repeatedNum = missingNum - sum;

    ans.push_back(repeatedNum);
    ans.push_back(missingNum);

    return ans;
}
