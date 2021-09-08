//Program to perform binary search using recursion
//{1,2,3,4,10,15}
#include <iostream>
using namespace std;
int binarySearch(int arr[], int s, int e, int key)
{
    if (s <= e)
    {
        int mid = (s + e) / 2;
        //base case
        if (arr[mid] == key)
        {
            return mid;
        }
        //recursive case
        else if (arr[mid] > key)
        {
            binarySearch(arr, s, mid - 1, key);
        }
        else if (arr[mid] < key)
        {
            binarySearch(arr, mid + 1, e, key);
        }
    }
    //if the key is not present
    else
    {
        return -1;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 10, 15};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;
    int s = 0;
    int e = n - 1;
    cout << binarySearch(arr, s, e, key) << endl;
    return 0;
}