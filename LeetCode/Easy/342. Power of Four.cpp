// 342. Power of Four
// https://leetcode.com/problems/power-of-four/

#include <iostream>
#include <cmath>
using namespace std;

class Solution
{
public:
    bool isPowerOfFour(int n)
    {
        int x;
        if (n > 0)
            x = sqrt(n);
        return n > 0 && x * x == n && !(n & (n - 1));
    }
};