//852. Peak Index in a Mountain Array;
//Leetcode Link: https://leetcode.com/problems/peak-index-in-a-mountain-array/

//There exists some i with 0 < i < arr.length - 1 such that:
// arr[0] < arr[1] < ... arr[i-1] < arr[i]
// arr[i] > arr[i+1] > ... > arr[arr.length - 1]
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int s = 0;
        int e = arr.size() - 1;
        while (s < e)
        {
            int mid = (s + e) / 2;
            if (arr[mid] < arr[mid + 1])
            {
                s = mid + 1;
            }
            else
            {
                e = mid;
            }
        }
        return s;
    }
};