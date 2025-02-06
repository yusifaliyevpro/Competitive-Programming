// 392. Is Subsequence
// https://leetcode.com/problems/is-subsequence/

#include <iostream>
using namespace std;

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int i = 0, j = 0, n = t.length();
        for (; j < n; j++)
        {
            if (s[i] == t[j])
                i++;
        }
        return i == s.length();
    }
};