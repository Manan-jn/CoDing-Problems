//1920. Build Array from Permutation
//Leetcode easy
//Array
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> buildArray(vector<int> &nums)
    {
        int n = nums.size();
        int ans1[n];
        for (int i = 0; i < n; i++)
        {
            ans1[i] = nums[nums[i]];
        }
        vector<int> ans(ans1, ans1 + n);
        return ans;
    }
};