// 441. Arranging Coins
// https://leetcode.com/problems/arranging-coins/

#include <iostream>
using namespace std;

class Solution
{
public:
    int arrangeCoins(int n)
    {
        long long l = 1, r = n, res, s, mid;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            s = (mid * (mid + 1)) / 2;
            if (s <= n)
            {
                res = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        return res;
    }
};