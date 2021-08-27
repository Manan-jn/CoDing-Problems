//1672. Richest Customer Wealth
//LEETCODE easy
//2D vector Link: https://leetcode.com/problems/richest-customer-wealth/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int max_sum = 0;
        for (int i = 0; i < accounts.size(); i++)
        {
            int sum = 0;
            for (int number : accounts[i])
            {
                sum = sum + number;
            }
            max_sum = max(sum, max_sum);
        }
        return max_sum;
    }
};