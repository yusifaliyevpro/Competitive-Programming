// 383. Ransom Note
// https://leetcode.com/problems/ransom-note/

#include <iostream>
using namespace std;

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        int A[26] = {0};
        int B[26] = {0};
        for (char x : ransomNote)
            A[x - 'a']++;
        for (char x : magazine)
            B[x - 'a']++;
        for (int i = 0; i < 26; i++)
            if (A[i] > B[i])
                return false;
        return true;
    }
};