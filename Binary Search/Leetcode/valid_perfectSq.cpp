//367. Valid Perfect Square
//Leetcode Link: https://leetcode.com/problems/valid-perfect-square/
//Need to return true if the number is perfect square otherwise return false
#include <iostream>
#include <cmath>
using namespace std;

class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        int ans = sqrt(num);
        if (ans * ans == num)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};