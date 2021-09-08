//Program to check if the array is sorted by recursion
//Can do by two ways 1) divide arrays in 1 and n-1 elements
//2) divide array into 2 equal parts

#include <iostream>
using namespace std;
bool sortedArray(int a[], int n)
{
    //base case
    if (n == 0 || n == 1)
    {
        return true;
    }
    //recursive case
    if (a[0] < a[1] && sortedArray(a + 1, n - 1))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    cout << sortedArray(arr, n) << endl;
    return 0;
}