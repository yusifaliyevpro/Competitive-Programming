// 26. Remove Duplicates from Sorted Array
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int k = 0, i = 1, j = 1;
        for (; j < nums.size(); j++)
            if (nums[j] != nums[i - 1])
            {
                swap(nums[i], nums[j]);
                i++;
            }
        return i;
    }
};
