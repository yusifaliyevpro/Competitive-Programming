// 169. Majority Element
// https://leetcode.com/problems/majority-element/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int m = 0, s = 0;
        for (int num : nums)
        {
            if (m == 0)
                s = num;
            if (s == num)
                m++;
            else
                m--;
        }
        return s;
    }
};