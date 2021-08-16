#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int min_num = INT_MAX;
    int n = sizeof(arr) / sizeof(int);
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == arr[e])
        {
            e--;
        }
        else if (arr[mid] > arr[e])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    cout << arr[e] << endl;
    return 0;
}