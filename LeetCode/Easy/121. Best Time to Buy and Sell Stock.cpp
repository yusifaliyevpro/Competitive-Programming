// 121. Best Time to Buy and Sell Stock
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int profit = 0, buy, i;
        buy = prices[0];
        for (i = 1; i < prices.size(); i++)
        {
            if (buy > prices[i])
                buy = prices[i];
            if (profit < prices[i] - buy)
                profit = prices[i] - buy;
        }
        return profit;
    }
};