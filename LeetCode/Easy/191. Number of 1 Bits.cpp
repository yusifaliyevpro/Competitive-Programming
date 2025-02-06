// 191. Number of 1 Bits
// https://leetcode.com/problems/number-of-1-bits/

#include <iostream>
using namespace std;

class Solution
{
public:
    int hammingWeight(int n)
    {
        int s = 0;
        for (int i = 0; i < 32; i++)
            s += ((n >> i) & 1);
        return s;
    }
};