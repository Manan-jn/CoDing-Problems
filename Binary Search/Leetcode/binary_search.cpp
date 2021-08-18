//704. Binary Search
//Easy Problem
//Leetcode link: https://leetcode.com/problems/binary-search/
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int n = nums.size();
        int s = 0;
        int e = n - 1;
        while (s <= e)
        {
            int mid = (s + e) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] > target)
            {
                e = mid - 1;
            }
            else if (nums[mid] < target)
            {
                s = mid + 1;
            }
        }
        return -1;
    }
};