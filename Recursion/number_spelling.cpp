//Program to print the spelling of the integer number
//2048 -> two zero four eight

#include <iostream>
#include <string>
using namespace std;
int printSpelling(int n, string arr[])
{
    if (n == 0)
    {
        return 0;
    }
    int digit = n % 10;
    printSpelling(n / 10, arr);

    for (int i = 0; i < 10; i++)
    {
        if (digit == i)
        {
            cout << arr[i] << " ";
        }
    }
}
int main()
{
    int n;
    cin >> n;
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    printSpelling(n, arr);
    return 0;
}