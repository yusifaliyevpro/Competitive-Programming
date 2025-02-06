// 412. Fizz Buzz
// https://leetcode.com/problems/fizz-buzz/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<string> fizzBuzz(int n)
    {
        vector<string> A(n);
        int i;
        for (i = 0; i < n; i++)
        {
            if ((i + 1) % 15 == 0)
                A[i] = "FizzBuzz";
            else if ((i + 1) % 3 == 0)
                A[i] = "Fizz";
            else if ((i + 1) % 5 == 0)
                A[i] = "Buzz";
            else
                A[i] = to_string(i + 1);
        }
        return A;
    }
};