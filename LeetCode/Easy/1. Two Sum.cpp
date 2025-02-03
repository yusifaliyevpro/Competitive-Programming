// 1. Two Sum
// https://leetcode.com/problems/two-sum/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int i, j, t;
        for (i = 0; i < nums.size(); i++)
            for (j = i + 1; j < nums.size(); j++)
                if ((nums[i] + nums[j]) == target)
                    return {i, j};
        return {0, 0};
    }
};