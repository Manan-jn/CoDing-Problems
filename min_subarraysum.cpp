//Under Progress
#include <iostream>
using namespace std;
bool isPossible(int length, int target, int nums[], int n)
{
    //need to check if we can make the subarray with the sum
    for (int i = 0; i <= n - length; i++)
    {
        int current = 0;
        for (int j = 0; j < length; j++)
        {
            current += nums[j + i];
        }
        if (current >= target)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int nums[] = {1, 1, 1, 1, 1, 1, 1, 1};
    int target;
    cin >> target;
    int s = 0;
    int n = sizeof(nums) / sizeof(int);
    int e = n;
    int ans = 0;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (isPossible(mid, target, nums, n))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    cout << ans << endl;
    return 0;
}