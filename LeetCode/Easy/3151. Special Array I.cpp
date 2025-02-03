// 3151. Special Array I
// https://leetcode.com/problems/special-array-i/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool isArraySpecial(vector<int> &nums)
    {
        int i;
        for (i = 1; i < nums.size(); i++)
            if ((nums[i] + nums[i - 1]) % 2 == 0)
                return false;
        return true;
    }
};