// 14. Longest Common Prefix
// https://leetcode.com/problems/longest-common-prefix/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
private:
    static bool compareLength(const string &s1, const string &s2) { return s1.length() < s2.length(); }

public:
    string longestCommonPrefix(vector<string> &strs)
    {
        char t;
        int i;
        string s = "";
        int minLength = min_element(strs.begin(), strs.end(), compareLength)->length();
        for (i = 0; i < minLength; i++)
        {
            t = strs[0][i];
            if (all_of(strs.begin(), strs.end(), [i, t](const std::string &str)
                       { return str[i] == t; }))
                s += t;
            else
                break;
        }
        return s;
    }
};