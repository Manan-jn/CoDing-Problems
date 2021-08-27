//1365. How Many Numbers Are Smaller Than the Current Number
//Leetcode easy;
//Link: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        int n = nums.size();
        int result[n];
        for (int i = 0; i < n; i++)
        {
            int current_num = nums[i];
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                if (nums[j] < nums[i] && i != j)
                {
                    count++;
                }
            }
            result[i] = count;
        }
        vector<int> ans(result, result + n);
        return ans;
    }
};