//1486. XOR Operation in an Array
//Leetcode easy
//Link: https://leetcode.com/problems/xor-operation-in-an-array/
#include <iostream>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int xorOperation(int n, int start)
    {
        int nums[n];
        for (int i = 0; i < n; i++)
        {
            nums[i] = start + 2 * i;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = ans ^ nums[i];
        }
        return ans;
    }
};