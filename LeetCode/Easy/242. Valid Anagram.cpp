// 242. Valid Anagram
// https://leetcode.com/problems/valid-anagram/

#include <iostream>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {

        int A[126] = {0};
        for (char x : s)
            A[x]++;
        for (char x : t)
            A[x]--;
        for (int val : A)
            if (val != 0)
                return false;
        return true;
    }
};