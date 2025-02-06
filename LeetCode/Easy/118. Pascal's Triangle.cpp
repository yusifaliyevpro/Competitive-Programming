// 118. Pascal's Triangle
// https://leetcode.com/problems/pascals-triangle/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> A(numRows);
        int row, i;
        for (row = 1; row <= numRows; row++)
        {
            int c = 1;
            for (i = 1; i <= row; i++)
            {
                A[row - 1].push_back(c);
                c = c * (row - i) / i;
            }
        }
        return A;
    }
};