// 1929. Concatenation of Array
//Leetcode easy
//Array

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        int n = nums.size();
        int ans1[2 * n];
        for (int i = 0; i < n; i++)
        {
            ans1[i] = nums[i];
            ans1[i + n] = nums[i];
        }
        vector<int> ans(ans1, ans1 + 2 * n);
        return ans;
    }
};