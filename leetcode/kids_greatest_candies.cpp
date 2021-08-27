//1431. Kids With the Greatest Number of Candies
//Leetcode easy
//String Link: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;
class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        int n = candies.size();
        bool result[n];
        int max_candies = 0;
        for (int i = 0; i < n; i++)
        {
            max_candies = max(candies[i], max_candies);
        }
        for (int i = 0; i < n; i++)
        {
            if (candies[i] + extraCandies >= max_candies)
            {
                result[i] = true;
            }
            else
            {
                result[i] = false;
            }
        }
        vector<bool> ans(result, result + n);
        return ans;
    }
};