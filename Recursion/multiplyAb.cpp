//Program to multiply two numbers A and B using recursion without using *operator
#include <iostream>
//5*3 = 5+5+5
using namespace std;
int multiply(int a, int b, int ans)
{
    //base case
    if (b == 1)
    {
        return a;
    }
    //recursive case
    ans = a + multiply(a, b - 1, ans);
    return ans;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int ans = 0;
    cout << multiply(a, b, ans) << endl;
    return 0;
}