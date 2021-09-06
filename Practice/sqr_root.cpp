//Program to find the square root of a number using brute force approach
//The loop will run for p+1 times for the p precision units
//It will run p times for the precision units and 1 time for the integer
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int p;
    //precision units for the decimal
    cin >> p;
    float ans = 0;
    float inc = 1.0;
    for (int i = 0; i <= p; i++)
    {
        //loop will run p+1 times
        while (ans * ans <= n)
        {
            ans = ans + inc;
        }
        //will move 1 step backward
        ans = ans - inc;
        //will decrease the increment pointer decimal every time
        inc = inc / 10;
    }
    cout << ans << endl;
    return 0;
}