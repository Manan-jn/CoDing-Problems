//744. Find Smallest Letter Greater Than Target
//Easy Problem
//Leetcode Link : https://leetcode.com/problems/find-smallest-letter-greater-than-target/

#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        int n = letters.size();
        int s = 0;
        int e = n - 1;
        char ans;
        while (s <= e)
        {
            int mid = (s + e) / 2;
            if (letters[mid] > target)
            {
                ans = letters[mid];
                e = mid - 1;
            }
            else if (letters[mid] <= target)
            {
                s = mid + 1;
                if (mid == n - 1)
                {
                    ans = letters[0];
                }
            }
        }
        return ans;
    }
};