//1346. Check If N and Its Double Exist
//Leetcode Link: https://leetcode.com/problems/check-if-n-and-its-double-exist/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution
{
    bool exists(int num, int n, vector<int> &arr, int index)
    {
        int target = num * 2;
        for (int i = 0; i < index; i++)
        {
            if (arr[i] == target)
            {
                return true;
            }
        }
        for (int i = index + 1; i < n; i++)
        {
            if (arr[i] == target)
            {
                return true;
            }
        }
        return false;
    }

public:
    bool checkIfExist(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int flag = 0;
        int element = 0;
        for (int i = 0; i < n; i++)
        {
            element = arr[i];
            if (exists(element, n, arr, i))
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
