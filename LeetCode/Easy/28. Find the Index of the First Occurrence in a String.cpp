// 28. Find the Index of the First Occurrence in a String
// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/

#include <iostream>
using namespace std;

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int i = 0, j = 0, t1 = haystack.length(), t2 = needle.length();
        for (; i <= t1 - t2; i++)
            if (haystack.substr(i, t2) == needle)
                return i;
        return -1;
    }
};