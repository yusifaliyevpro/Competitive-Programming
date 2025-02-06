// 136. Single Number
// https://leetcode.com/problems/single-number/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int i = 0, t = 0;
        for (; i < nums.size(); i++)
            t ^= nums[i];
        return t;
    }
};