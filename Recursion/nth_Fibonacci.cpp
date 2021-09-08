//Program to calculate the nth term of the fibonacci series using recursion
//{0,1,1,2,3,5,8....}
#include <iostream>
using namespace std;
int nthTerm(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return (nthTerm(n - 1) + nthTerm(n - 2));
}
int main()
{
    int n;
    cin >> n;
    cout << nthTerm(n) << endl;
    return 0;
}