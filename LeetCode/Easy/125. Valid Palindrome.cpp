// 125. Valid Palindrome
// https://leetcode.com/problems/valid-palindrome/

#include <iostream>
using namespace std;

class Solution
{
private:
    int isAlphaNumeric(char c)
    {
        if ((48 <= c && c <= 57) || (97 <= c && c <= 122))
            return c;
        else if (65 <= c && c <= 90)
            return c + 32;
        else
            return 0;
    }

public:
    bool isPalindrome(string s)
    {
        int n = s.length(), i = 0, j = n - 1, t1, t2;
        while (i < j)
        {
            t1 = isAlphaNumeric(s[i]);
            t2 = isAlphaNumeric(s[j]);
            if (t1 && t2 && t1 == t2)
            {
                i++;
                j--;
            }
            else if (!t1)
                i++;
            else if (!t2)
                j--;
            else
                return false;
        }
        return true;
    }
};