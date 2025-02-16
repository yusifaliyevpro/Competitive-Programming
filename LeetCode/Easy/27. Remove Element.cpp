// 27. Remove Element
// https://leetcode.com/problems/remove-element/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int i = 0, j = 0;
        for (; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};