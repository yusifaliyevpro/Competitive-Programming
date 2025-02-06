// 283. Move Zeroes
// https://leetcode.com/problems/move-zeroes/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int i = 0, j = 0, t = nums.size();
        for (j = 0; j < t; j++)
            if (nums[j] != 0)
            {
                swap(nums[i], nums[j]);
                i++;
            }
    }
};