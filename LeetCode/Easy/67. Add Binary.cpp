// 67. Add Binary
// https://leetcode.com/problems/add-binary/

#include <iostream>
using namespace std;

class Solution
{
public:
    string addBinary(string a, string b)
    {
        string c = "";
        int n = a.length(), m = b.length();
        if (n < m)
            return addBinary(b, a);
        int i = n - 1, j = m - 1, t = 0, s;
        for (; i >= 0 || t == 1; i--, j--)
        {
            s = (i >= 0 ? a[i] - '0' : 0) + (j >= 0 ? b[j] - '0' : 0) + t;
            t = s / 2;
            c = (char)(s % 2 + '0') + c;
        }
        return c;
    }
};