//Program to find the subarray with maxsum
//Kadane's algorithm
//Time complexity O(N)
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int currentSum = 0;
    int maxSum = 0;
    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        maxSum = max(maxSum, currentSum);
    }
    cout << "Max sum is " << maxSum << endl;
}