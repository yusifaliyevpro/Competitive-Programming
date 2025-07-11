// 54. Spiral Matrix
// https://leetcode.com/problems/spiral-matrix/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int i, j, k1, k2, m = matrix.size(), n = matrix[0].size(), s = 1;
        vector<int> A;
        i = 0, j = 0, k1 = m - 1, k2 = n - 1;
        while (s <= m * n)
        {
            while (j <= k2)
                A.push_back(matrix[i][j++]), s++;
            i++, j--;
            while (i <= k1 && s <= m * n)
                A.push_back(matrix[i++][j]), s++;
            i--, j--;
            while (j >= n - k2 - 1 && s <= m * n)
                A.push_back(matrix[i][j--]), s++;
            i--, j++, k1--, k2--;
            while (i >= m - k1 - 1 && s <= m * n)
                A.push_back(matrix[i--][j]), s++;
            i++, j++;
        }
        return A;
    }
};