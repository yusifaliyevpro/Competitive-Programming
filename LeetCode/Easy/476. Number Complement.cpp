// 476. Number Complement
// https://leetcode.com/problems/number-complement/

#include <iostream>
using namespace std;

class Solution
{
public:
    int findComplement(int num)
    {
        int mask = 0;
        int complement = ~num;
        while (num != 0)
        {
            mask = (mask << 1) | 1;
            num = num >> 1;
        }

        return complement & mask;
    }
};