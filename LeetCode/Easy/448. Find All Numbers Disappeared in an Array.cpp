// 448. Find All Numbers Disappeared in an Array
// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int i, t = nums.size();
        vector<int> A;
        for (i = 1; i <= t; i++)
            if (!binary_search(nums.begin(), nums.end(), i))
                A.push_back(i);
        return A;
    }
};