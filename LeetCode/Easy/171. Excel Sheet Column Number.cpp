// 171. Excel Sheet Column Number
// https://leetcode.com/problems/excel-sheet-column-number/

#include <iostream>
#include <cmath>
using namespace std;

class Solution
{
public:
    int titleToNumber(string columnTitle)
    {
        int i = 0, s = 0;
        for (; i < columnTitle.size(); i++)
            s = s * 26 + (columnTitle[i] - 'A' + 1);
        return s;
    }
};