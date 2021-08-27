//191. Number of 1 Bits
//Leetcode easy bit manipulation
//Link: https://leetcode.com/problems/number-of-1-bits/
#include <iostream>
using namespace std;

class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        int count = 0;
        while (n > 0)
        {
            int last_bit = n & 1;
            count += last_bit;
            n = n >> 1;
        }
        return count;
    }
};