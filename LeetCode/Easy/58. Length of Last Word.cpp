// 58. Length of Last Word
// https://leetcode.com/problems/length-of-last-word/

#include <iostream>
using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int i = s.length() - 1, t;
        while (s[i] == ' ')
            i--;
        t = i;
        while (i >= 0 && s[i] != ' ')
            i--;
        return t - i;
    }
};