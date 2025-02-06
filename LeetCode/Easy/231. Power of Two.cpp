// 231. Power of Two
// https://leetcode.com/problems/power-of-two/

#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        return n > 0 && n && !(n & (n - 1));
    }
};