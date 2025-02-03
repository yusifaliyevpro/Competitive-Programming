// 66. Plus One
// https://leetcode.com/problems/plus-one/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int t = 1, i = digits.size() - 1;
        for (; i >= 0; i--)
        {
            if (!t)
                break;
            if (digits[i] == 9)
                digits[i] = 0;
            else
            {
                digits[i] += 1;
                t = 0;
            }
        }
        if (t)
            digits.insert(digits.begin(), 1);
        return digits;
    }
};