// 202. Happy Number
// https://leetcode.com/problems/happy-number/

#include <iostream>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    bool isHappy(int n)
    {
        unordered_set<int> A;

        while (A.find(n) == A.end())
        {
            A.insert(n);
            int s = 0;
            for (; n > 0; n /= 10)
                s += (n % 10) * (n % 10);
            n = s;
            if (n == 1)
                return true;
        }
        return false;
    }
};