// 69. Sqrt(x)
// https://leetcode.com/problems/sqrtx/

#include <iostream>
using namespace std;

class Solution
{
public:
    int mySqrt(int x)
    {
        int l = 0, r = x;
        unsigned long long square, mid;
        mid = (l + r) / 2;
        while (l <= r)
        {
            square = mid * mid;
            if (square == x)
                return mid;
            else if (square < x)
                l = mid + 1;
            else
                r = mid - 1;
            mid = (l + r) / 2;
        }
        return mid;
    }
};