// 374. Guess Number Higher or Lower
// https://leetcode.com/problems/guess-number-higher-or-lower/

#include <iostream>
using namespace std;

/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

int guess(int num) { return 0; }

class Solution
{
public:
    int guessNumber(int n)
    {
        int l = 0, r = n, mid, t;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            t = guess(mid);
            if (t == 0)
                return mid;
            else if (t == -1)
                r = mid - 1;
            else
                l = mid + 1;
        }
        return mid;
    }
};