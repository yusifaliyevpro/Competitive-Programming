// 461. Hamming Distance
// https://leetcode.com/problems/hamming-distance/

#include <iostream>
using namespace std;

class Solution
{
public:
    int hammingDistance(int x, int y)
    {
        int n = x ^ y, s = 0;
        while (n)
        {
            s += (n & 1);
            n >>= 1;
        }
        return s;
    }
};