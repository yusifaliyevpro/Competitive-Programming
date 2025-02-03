// 20. Valid Parentheses
// https://leetcode.com/problems/valid-parentheses/

#include <iostream>
#include <stack>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        int i, n = s.length();
        stack<char> A;
        for (i = 0; i < n; i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                A.push(s[i]);
            else
            {
                if (!A.empty() && (A.top() == s[i] - 2 || A.top() == s[i] - 1))
                    A.pop();
                else
                    return false;
            }
        }
        return A.empty();
    }
};