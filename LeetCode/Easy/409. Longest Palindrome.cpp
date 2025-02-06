// 409. Longest Palindrome
// https://leetcode.com/problems/longest-palindrome/

#include <iostream>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int longestPalindrome(string s)
    {
        unordered_map<char, int> A;
        int i, n = s.length();
        bool a = false;
        for (i = 0; i < n; i++)
            A[s[i]]++;
        n = 0;
        for (auto x : A)
            if (x.second % 2 == 0)
                n += x.second;
            else
            {
                n += x.second - 1;
                a = true;
            }

        return n + a;
    }
};