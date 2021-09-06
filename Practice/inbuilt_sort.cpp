//Program to perform inbuilt sorting on the array
#include <iostream>
#include <algorithm>
using namespace std;
bool compare(int a, int b)
{
    return a > b;
    //greater element will be returned as true
    //it will be sorted in the decreasing order
}
int main()
{
    int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n, compare);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}