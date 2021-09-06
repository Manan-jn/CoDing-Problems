//Program to find the pair of elements that sum to k(given)
//Two pointer approach (will be a sorted array and move left and right accordingly)
//Time complexity O(N^2)
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
    int k;
    cin >> k;
    int left = 0;
    int right = n - 1;
    int count = 0;
    while (left <= right)
    {
        int sum = arr[left] + arr[right];
        if (sum == k)
        {
            cout << arr[left] << " " << arr[right] << endl;
            left++;
            right--;
        }
        else if (sum > k)
        {
            right--;
        }
        else
        {
            left++;
        }
    }
    return 0;
}