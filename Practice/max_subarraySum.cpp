//Program to find the max subarray sum
//Takes time complexity of O(n^3)
//Need to find subarray with the largest max sum
#include <iostream>
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
    int maxSum = 0;
    int left = 0;
    int right = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int currentSum = 0;
            for (int k = i; k <= j; k++)
            {
                currentSum += arr[k];
            }
            if (currentSum > maxSum)
            {
                maxSum = currentSum;
                left = i;
                right = j;
            }
        }
    }
    cout << "Max Sum is " << maxSum << endl;
    for (int i = left; i <= right; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}