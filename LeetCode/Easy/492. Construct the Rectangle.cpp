// 492. Construct the Rectangle
// https://leetcode.com/problems/construct-the-rectangle/

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution
{
public:
    vector<int> constructRectangle(int area)
    {
        int W, L;
        W = sqrt(area);
        L = W;
        while (area % W != 0)
            W--;
        L = area / W;
        return {L, W};
    }
};