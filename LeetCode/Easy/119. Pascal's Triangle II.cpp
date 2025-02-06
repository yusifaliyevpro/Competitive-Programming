// 119. Pascal's Triangle II
// https://leetcode.com/problems/pascals-triangle-ii/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> A;
        rowIndex++;
        long long c = 1;
        for (int i = 1; i <= rowIndex; i++)
        {
            A.push_back(c);
            c = c * (rowIndex - i) / i;
        }
        return A;
    }
};