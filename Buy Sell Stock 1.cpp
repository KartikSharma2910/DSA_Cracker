#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int minPrice = INT_MAX;
    int profit = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        minPrice = min(minPrice, prices[i]);
        profit = max(profit, prices[i] - minPrice);
    }
    return profit;
}
int main()
{
    vector<int> pricies = {7, 1, 5, 3, 6, 4};
    cout << maxProfit(pricies);
    return 0;
}