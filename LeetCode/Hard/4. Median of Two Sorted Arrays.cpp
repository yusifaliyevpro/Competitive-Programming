// 4. Median of Two Sorted Arrays
// https://leetcode.com/problems/median-of-two-sorted-arrays/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &a, vector<int> &b)
    {
        int n = a.size(), m = b.size();
        if (n > m)
            return findMedianSortedArrays(b, a);

        int lo = 0, hi = n;
        while (lo <= hi)
        {
            int mid1 = (lo + hi) / 2;
            int mid2 = (n + m + 1) / 2 - mid1;

            int l1 = (mid1 == 0 ? INT_MIN : a[mid1 - 1]);
            int r1 = (mid1 == n ? INT_MAX : a[mid1]);

            int l2 = (mid2 == 0 ? INT_MIN : b[mid2 - 1]);
            int r2 = (mid2 == m ? INT_MAX : b[mid2]);

            if (l1 <= r2 && l2 <= r1)
            {
                if ((n + m) % 2 == 0)
                    return (max(l1, l2) + min(r1, r2)) / 2.0;
                else
                    return max(l1, l2);
            }

            if (l1 > r2)
                hi = mid1 - 1;
            else
                lo = mid1 + 1;
        }
        return 0;
    }
};