// 8. String to Integer (atoi)
// https://leetcode.com/problems/string-to-integer-atoi/

#include <iostream>
using namespace std;

class Solution
{
public:
    int myAtoi(string s)
    {
        long long integer = 0;
        bool negative = false;
        int i = 0, n = s.length();
        while (s[i] == ' ')
            i++;
        if (s[i] == '-')
        {
            negative = true;
            i++;
        }
        else if (s[i] == '+')
            i++;
        for (; i < n; i++)
            if (integer > INT_MAX)
                break;
            else if (s[i] >= 48 && s[i] <= 57)
                integer = integer * 10 + (s[i] - '0');
            else
                break;
        integer = (negative ? -1 * integer : integer);
        if (integer > INT_MAX)
            integer = INT_MAX;
        else if (integer < INT_MIN)
            integer = INT_MIN;
        return integer;
    }
};