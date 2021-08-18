//69. Sqrt(x)
//Easy Problem
//Leetcode Link: https://leetcode.com/problems/sqrtx/
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int mySqrt(int x)
    {
        long long int s = 0;
        long long int e = x;
        float ans = -1;
        while (s <= e)
        {
            long long int mid = (s + e) / 2;
            if (mid * mid == x)
            {
                return mid;
            }
            if (mid * mid < x)
            {
                ans = mid;
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        return ans;
    }
};