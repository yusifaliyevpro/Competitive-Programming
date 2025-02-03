// 12. Integer to Roman
// https://leetcode.com/problems/integer-to-roman/

#include <iostream>
using namespace std;

class Solution
{
public:
    string intToRoman(int num)
    {
        int i, t;
        string s = "";
        string A[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int B[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        for (i = 0; i < 13; i++)
        {
            t = num / B[i];
            num %= B[i];
            while (t--)
                s += A[i];
        }
        return s;
    }
};