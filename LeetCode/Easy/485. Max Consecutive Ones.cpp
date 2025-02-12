// 485. Max Consecutive Ones
// https://leetcode.com/problems/max-consecutive-ones/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int maxx = 0, count = 0, t = nums.size();
        for (int i = 0; i < t; i++)
        {
            if (nums[i] == 1)
                count++;
            else
            {
                if (maxx < count)
                    maxx = count;
                count = 0;
            }
        }
        return max(maxx, count);
    }
};