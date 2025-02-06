// 278. First Bad Version
// https://leetcode.com/problems/first-bad-version/

#include <iostream>
using namespace std;

// The API isBadVersion is defined for you.
bool isBadVersion(int version) { return true; };

class Solution
{
public:
    int firstBadVersion(int n)
    {
        int l = 1, mid;
        while (l <= n)
        {
            mid = l + (n - l) / 2;
            if (isBadVersion(mid))
                n = mid - 1;
            else
                l = mid + 1;
        }
        return l;
    }
};