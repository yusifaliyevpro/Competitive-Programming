// 1752. Check if Array Is Sorted and Rotated
// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool check(vector<int> &nums)
    {
        int t = 0, i = 0, n = nums.size();
        if (n == 1)
            return true;
        if (nums[0] < *nums.rbegin())
            t = 1;
        for (; i < n; i++)
        {
            if (t == 2)
                return false;
            if (nums[i] > nums[(i + 1) % n])
                t++;
        }
        return true;
    }
};