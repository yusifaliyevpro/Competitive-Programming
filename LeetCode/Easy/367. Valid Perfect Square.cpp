// 367. Valid Perfect Square
// https://leetcode.com/problems/valid-perfect-square/

#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        int l = 0, r = num;
        unsigned long long square, mid;
        mid = (l + r) / 2;
        while (l <= r)
        {
            square = mid * mid;
            if (square == num)
                return true;
            else if (square < num)
                l = mid + 1;
            else
                r = mid - 1;
            mid = (l + r) / 2;
        }
        return false;
    }
};