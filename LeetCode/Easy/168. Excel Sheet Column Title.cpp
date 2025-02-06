// 168. Excel Sheet Column Title
// https://leetcode.com/problems/excel-sheet-column-title/

#include <iostream>
using namespace std;

class Solution
{
private:
    char toAlpha(int n) { return (char)(n + 'A'); }

public:
    string convertToTitle(int columnNumber)
    {
        string s = "";
        for (; columnNumber > 0; columnNumber /= 26)
        {
            columnNumber--;
            s = toAlpha(columnNumber % 26) + s;
        }
        return s;
    }
};