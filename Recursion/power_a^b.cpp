//Program to calculate a^b using recursion
//a=2 b =3 then a^b = 8
#include <iostream>
using namespace std;
int power(int a, int b)
{
    //base case
    if (b == 0)
    {
        return 1;
    }
    //recursive case
    int ans = a * power(a, b - 1);
    return ans;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << power(a, b) << endl;
    return 0;
}