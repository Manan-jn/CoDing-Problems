//565. Array Nesting
//Leetcode medium
//Link : https://leetcode.com/problems/array-nesting/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution
{
public:
    int arrayNesting(vector<int> &nums)
    {
        bool *arr = new bool[nums.size()];
        for (int i = 0; i < nums.size(); i++)
        {
            arr[i] = 0;
        }
        int result = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (!arr[i])
            {
                int s = nums[i];
                int count = 0;
                do
                {
                    s = nums[s];
                    count++;
                    arr[s] = true;
                } while (s != nums[i]);
                {
                    result = max(result, count);
                }
            }
        }
        return result;
    }
};