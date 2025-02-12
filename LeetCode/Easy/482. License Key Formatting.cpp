// 482. License Key Formatting
// https://leetcode.com/problems/license-key-formatting/

#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string licenseKeyFormatting(string s, int k)
    {
        int i = s.size(), m = 0;
        string res;
        while (i--)
        {
            if (s[i] != '-')
            {
                res = char(toupper(s[i])) + res;
            }
        }
        i = s.size() - k;
        for (; i > 0; i -= k)
            s.insert(i, 1, '-');
        return s;
    }
};