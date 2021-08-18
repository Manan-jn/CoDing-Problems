//278. First Bad Version
//Easy Problem
//Leetcode Link: https://leetcode.com/problems/first-bad-version/
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
bool isBadVersion(int version)
{
    //api call;
}
class Solution
{
public:
    int firstBadVersion(int n)
    {
        int s = 1;
        int e = n;
        while (s <= e)
        {
            // int mid=(s+e)/2; memory overflow
            int mid = s + (e - s) / 2;
            if (isBadVersion(mid))
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        return s;
    }
};