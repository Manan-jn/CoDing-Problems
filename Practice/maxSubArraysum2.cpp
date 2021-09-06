//Program to find the subarray with the max sum
//Max subarray sum
//Takes time complexity of O(N^2)
//Cumulative sum approach
#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cin >> n;
    int cumSum[100] = {0};
    int maxSum = 0;
    int currentSum = 0;
    int left = 0;
    int right = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        cumSum[i] = cumSum[i - 1] + arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            currentSum = 0;
            currentSum = cumSum[j] - cumSum[i - 1];
            if (currentSum > maxSum)
            {
                maxSum = currentSum;
                left = i;
                right = j;
            }
        }
    }
    cout << "Max sum is " << maxSum << endl;
    for (int i = left; i <= right; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}