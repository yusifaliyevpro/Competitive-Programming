// 495. Teemo Attacking
// https://leetcode.com/problems/teemo-attacking/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int findPoisonedDuration(vector<int> &timeSeries, int duration)
    {
        int i, t = timeSeries.size(), s = timeSeries[0] + duration - 1;
        for (i = 1; i < t; i++)
        {
            if (s[i])
        }
    }
};