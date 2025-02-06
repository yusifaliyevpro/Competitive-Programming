// 29. Divide Two Integers
// https://leetcode.com/problems/divide-two-integers/

#include <iostream>
using namespace std;

class Solution
{
public:
    int divide(int dividend, int divisor)
    {
        if (dividend < 0 && divisor > 0)
            return divide(divisor, dividend);
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
        dividend = abs(dividend);
        divisor = abs(divisor);
        long long quotient = 0;
        for (int i = 30; i >= 0; i--)
            if ((divisor << i) <= dividend)
            {
                dividend -= (divisor << i);
                quotient |= (1LL << i);
            }
        return sign * quotient;
    }
};