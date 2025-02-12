// 459. Repeated Substring Pattern
// https://leetcode.com/problems/repeated-substring-pattern/

#include <iostream>
using namespace std;

class Solution
{
public:
    bool repeatedSubstringPattern(string s)
    {
        string concat = s + s;
        return concat.substr(1, concat.length() - 2).find(s) != string::npos;
    }
};