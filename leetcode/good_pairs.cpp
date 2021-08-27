//1512. Number of Good Pairs
//leetcode easy  array
//Link :https://leetcode.com/problems/number-of-good-pairs/
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        int num_pairs = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (nums[i] == nums[j])
                {
                    num_pairs++;
                }
            }
        }
        return num_pairs;
    }
};