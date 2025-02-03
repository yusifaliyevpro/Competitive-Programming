// 70. Climbing Stairs
// https://leetcode.com/problems/climbing-stairs/

#include <iostream>
using namespace std;

class Solution
{
private:
    int fib(int n)
    {
        if (n <= 1)
            return n;
        int dp[n + 1];
        dp[0] = 0;
        dp[1] = 1;

        for (int i = 2; i <= n; i++)
            dp[i] = dp[i - 1] + dp[i - 2];
        return dp[n];
    }

public:
    int climbStairs(int n) { return fib(n + 1); }
};