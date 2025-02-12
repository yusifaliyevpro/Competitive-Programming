// 59. Spiral Matrix II
// https://leetcode.com/problems/spiral-matrix-ii/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<vector<int>> generateMatrix(int n)
    {
        int i, j, k, s = 1;
        vector<vector<int>> A(n, vector<int>(n, 0));
        i = 0, j = 0, k = n - 1;
        while (s <= n * n)
        {
            while (j <= k)
                A[i][j++] = s++;
            i++, j--;
            while (i <= k)
                A[i++][j] = s++;
            i--, j--;
            while (j >= n - k - 1)
                A[i][j--] = s++;
            i--, j++, k--;
            while (i >= n - k - 1)
                A[i--][j] = s++;
            i++, j++;
        }
        return A;
    }
};