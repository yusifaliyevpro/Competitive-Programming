// 500. Keyboard Row
// https://leetcode.com/problems/keyboard-row/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<string> findWords(vector<string> &words)
    {
        int t, i, d;
        string first = "qQwWeErRtTyYuUiIoOpP", second = "aAsSdDfFgGhHjJkKlL", third = "zZxXcCvVbBnNmM";
        vector<string> A;
        for (string x : words)
        {
            t = x.size(), d = 0;
            string s;
            if (first.contains(x[0]))
                s = first;
            else if (second.contains(x[0]))
                s = second;
            else
                s = third;
            for (i = 1; i < t; i++)
                if (!s.contains(x[i]))
                {
                    break;
                    d++;
                }
            if (d == t)
                A.push_back(x);
        }
        return A;
    }
};