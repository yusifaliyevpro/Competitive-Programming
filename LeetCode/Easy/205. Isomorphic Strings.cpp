// 205. Isomorphic Strings
// https://leetcode.com/problems/isomorphic-strings/

#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        unordered_map<char, char> A;
        unordered_set<char> B;
        int i, n = s.length();
        for (i = 0; i < n; i++)
        {
            if (A.find(s[i]) == A.end() && !B.contains(t[i]))
            {
                A[s[i]] = t[i];
                B.insert(t[i]);
            }
            else if (A[s[i]] != t[i])
                return false;
        }
        return true;
    }
};