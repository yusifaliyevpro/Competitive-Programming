// 268. Missing Number
// https://leetcode.com/problems/missing-number/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size(), t = 0;
        n = (n * (n + 1)) / 2;
        for (int x : nums)
            t += x;
        return n - t;
    }
};