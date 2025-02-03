// 13. Roman to Integer
// https://leetcode.com/problems/roman-to-integer/

#include <iostream>
using namespace std;

class Solution
{
private:
    int value(char r)
    {
        if (r == 'I')
            return 1;
        if (r == 'V')
            return 5;
        if (r == 'X')
            return 10;
        if (r == 'L')
            return 50;
        if (r == 'C')
            return 100;
        if (r == 'D')
            return 500;
        if (r == 'M')
            return 1000;
        return -1;
    }

public:
    int romanToInt(string s)
    {
        int i, n = value(s[0]), t1, t2;
        for (i = 1; i < s.length(); i++)
        {
            t1 = value(s[i - 1]);
            t2 = value(s[i]);
            if (t1 < t2)
                n = n - 2 * t1 + t2;
            else
                n += t2;
        }
        return n;
    }
};