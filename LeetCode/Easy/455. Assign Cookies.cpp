// 455. Assign Cookies
// https://leetcode.com/problems/assign-cookies/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int n = g.size(), m = s.size();
        int i = 0, j = 0;
        while (i < n && j < m)
        {
            if (g[i] <= s[j])
                i++;
            j++;
        }
        return i;
    }
};