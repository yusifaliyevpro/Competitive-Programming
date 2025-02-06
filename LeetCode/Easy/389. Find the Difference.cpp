// 389. Find the Difference
// https://leetcode.com/problems/find-the-difference/

#include <iostream>
using namespace std;

class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        int i, n = s.length();
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        for (i = 0; i < n; i++)
            if (s[i] != t[i])
                return t[i];
        return *t.rbegin();
    }
};