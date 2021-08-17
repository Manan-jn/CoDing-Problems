//Starters 9
// Large square
// Link : https://www.codechef.com/START9C/problems/XLSQUARE
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, a;
        cin >> n >> a;
        int sides = floor(sqrt(n));
        int length = sides * a;

        cout << length << endl;
    }
    return 0;
}