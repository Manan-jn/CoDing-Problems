#include <iostream>
#include <algorithm>
#include <climits>
//Program to find the min and max number of the array
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
    int largest = INT_MIN;
    int smallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    cout << "Smallest is " << smallest << endl;
    cout << "Largest is " << largest << endl;
    return 0;
}