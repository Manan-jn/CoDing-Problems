// 1480. Running Sum of 1d Array
//Leetcode easy
//Link :https://leetcode.com/problems/running-sum-of-1d-array/
//Array

#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        int n = nums.size();
        int runningSum1[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + nums[i];
            runningSum1[i] = sum;
        }
        vector<int> runningSum(runningSum1, runningSum1 + n);
        return runningSum;
    }
};