// 231. Power of Two
//Leetcode easy Bit manipulation
//Link: https://leetcode.com/problems/power-of-two/
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        long long int z = n;
        if ((z & (z - 1)) == 0 && z > 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};