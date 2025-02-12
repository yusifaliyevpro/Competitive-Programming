// 415. Add Strings
// https://leetcode.com/problems/add-strings/

#include <iostream>
using namespace std;

class Solution
{
public:
    string addStrings(string num1, string num2)
    {
        int i = num1.length() - 1, j = num2.length() - 1, t = 0, s;
        if (i > j)
            return addStrings(num2, num1);
        while (j >= 0)
        {
            s = (i >= 0 ? num1[i] - '0' : 0) + num2[j] - '0' + t;
            t = s / 10;
            num2[j] = (s % 10 + '0');
            i--;
            j--;
        }
        if (t != 0)
            num2 = (char)(t + '0') + num2;
        return num2;
    }
};