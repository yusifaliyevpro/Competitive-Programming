// 326. Power of Three
// https://leetcode.com/problems/power-of-three/

#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPowerOfThree(int n)
    {
        return (n > 0 && 1162261467 % n == 0);
    }
};