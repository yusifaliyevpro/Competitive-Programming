// 290. Word Pattern
// https://leetcode.com/problems/word-pattern/

#include <iostream>
#include <sstream>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool wordPattern(string pattern, string s)
    {
        unordered_map<char, string> A;
        unordered_map<string, char> B;
        string sub;
        istringstream stream(s);
        int i = 0, t = pattern.length();
        while (stream >> sub)
        {
            if (i >= t)
                return false;
            char c = pattern[i];
            if ((A.find(c) != A.end() && A[c] != sub) || (B.find(sub) != B.end() && B[sub] != c))
                return false;
            A[c] = sub;
            B[sub] = c;
            i++;
        }
        return i == t;
    }
};