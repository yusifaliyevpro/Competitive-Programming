// 217. Contains Duplicate
// https://leetcode.com/problems/contains-duplicate/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> A(nums.begin(), nums.end());
        return A.size() < nums.size();
    }
};