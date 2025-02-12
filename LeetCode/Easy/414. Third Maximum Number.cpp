// 414. Third Maximum Number
// https://leetcode.com/problems/third-maximum-number/

#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        set<int, greater<int>> A(nums.begin(), nums.end());
        return (A.size() < 3 ? *A.begin() : *next(A.begin(), 2));
    }
};