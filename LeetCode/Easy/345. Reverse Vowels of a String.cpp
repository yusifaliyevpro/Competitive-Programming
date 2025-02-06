// 345. Reverse Vowels of a String
// https://leetcode.com/problems/reverse-vowels-of-a-string/

#include <iostream>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    string reverseVowels(string s)
    {
        int i = 0, j = s.length() - 1;
        unordered_set<char> A = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        while (i < j)
        {
            if (A.contains(s[i]) && A.contains(s[j]))
            {
                swap(s[i], s[j]);
                i++;
                j--;
            }
            if (!A.contains(s[i]))
                i++;
            if (!A.contains(s[j]))
                j--;
        }
        return s;
    }
};