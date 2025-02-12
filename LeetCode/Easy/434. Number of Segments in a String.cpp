// 434. Number of Segments in a String
// https://leetcode.com/problems/number-of-segments-in-a-string/

#include <iostream>
#include <sstream>
using namespace std;

class Solution
{
public:
    int countSegments(string s)
    {
        istringstream stream(s);
        int n = 0;
        while (stream >> s)
            n++;
        return n;
    }
};