//1608. Special Array With X Elements Greater Than or Equal X
//Easy Problem
//Leetcode Link: https://leetcode.com/problems/special-array-with-x-elements-greater-than-or-equal-x/
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
    int isPossible(vector<int> &nums, int mid, int n)
    {
        //need to check if there are mid elements that are
        //equal to or greater than mid
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] >= mid)
            {
                flag++;
            }
        }
        if (flag == mid)
        {
            return 1;
        }
        else if (flag > mid)
        {
            return 2;
        }
        else
        {
            return 3;
        }
    }

public:
    int specialArray(vector<int> &nums)
    {
        int n = nums.size();
        int s = 1;
        int e = n;
        int ans = -1;
        while (s <= e)
        {
            int mid = (s + e) / 2;
            if (isPossible(nums, mid, n) == 1)
            {
                ans = mid;
                break;
            }
            else if (isPossible(nums, mid, n) == 2)
            {
                s = mid + 1;
            }
            else if (isPossible(nums, mid, n) == 3)
            {
                e = mid - 1;
            }
        }
        return ans;
    }
};