// 2559. Count Vowel Strings in Ranges
// https://leetcode.com/problems/count-vowel-strings-in-ranges/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution
{

public:
    vector<int> vowelStrings(vector<string> &words, vector<vector<int>> &queries)
    {
        int t1 = queries.size(), t2 = words.size(), s = 0;
        vector<int> A(t1, 0);
        unordered_set<char> B{'a', 'e', 'i', 'o', 'u'};
        vector<int> Sum(t2);
        for (int i = 0; i < t2; i++)
        {
            if (B.contains(words[i][0]) && B.contains(*words[i].rbegin()))
                s++;
            Sum[i] = s;
        }
        for (int i = 0; i < t1; i++)
            A[i] = Sum[queries[i][1]] - (queries[i][0] == 0 ? 0 : Sum[queries[i][0] - 1]);
        return A;
    }
};