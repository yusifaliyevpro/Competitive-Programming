// 219. Contains Duplicate II
// https://leetcode.com/problems/contains-duplicate-ii/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        unordered_map<int, int> A;
        int i;
        for (i = 0; i < nums.size(); i++)
        {
            int t = nums[i];
            if (A.find(i) != A.end() && i - A[t] <= k)
                return true;
            A[t] = A[i];
        }
        return false;
    }
};