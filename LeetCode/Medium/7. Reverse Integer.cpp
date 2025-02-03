// 7. Reverse Integer
// https://leetcode.com/problems/reverse-integer/

#include <iostream>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        long long reversed = 0, i;

        for (; x != 0; x /= 10)
            reversed = reversed * 10 + x % 10;
        if (reversed < INT_MAX && reversed > INT_MIN)
            return reversed;
        else
            return 0;
    }
};