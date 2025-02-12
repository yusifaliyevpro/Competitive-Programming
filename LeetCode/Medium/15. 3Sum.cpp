// 15. 3Sum
// https://leetcode.com/problems/3sum/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        int i, j, k, t = nums.size(), s;
        sort(nums.begin(), nums.end());
        vector<vector<int>> A;
        for (i = 0; i < t; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            j = i + 1;
            k = t - 1;
            while (j < k)
            {
                s = nums[i] + nums[j] + nums[k];
                if (s > 0)
                    k--;
                else if (s < 0)
                    j++;
                else
                {
                    A.push_back({nums[i], nums[j++], nums[k--]});
                    while (j < k && nums[j] == nums[j - 1])
                        j++;
                    while (j < k && nums[k] == nums[k + 1])
                        k--;
                }
            }
        }
        return A;
    }
};