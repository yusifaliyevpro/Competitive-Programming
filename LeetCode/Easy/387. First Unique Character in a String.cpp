// 387. First Unique Character in a String
// https://leetcode.com/problems/first-unique-character-in-a-string/

#include <iostream>
using namespace std;

class Solution
{
public:
    int firstUniqChar(string s)
    {
        int A[26] = {0}, i, t = s.length();
        for (char x : s)
            A[x - 'a']++;
        for (i = 0; i < t; i++)
            if (A[s[i] - 'a'] == 1)
                return i;
        return -1;
    }
};