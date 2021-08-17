// Starters 9
// Bus full of passengers
// Link: https://www.codechef.com/START9C/problems/BUS
//Basic Problem
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
        int n, m, q;
        cin >> n;
        cin >> m;
        cin >> q;
        int flag = 0;
        int count = 0;
        int passengersCount[1000] = {0};
        for (int i = 0; i < q; i++)
        {
            char ch;
            int passenger;
            cin >> ch;
            cin >> passenger;
            if (flag != 1)
            {
                if (ch == '+')
                {
                    passengersCount[passenger] = 1;
                    count++;
                }
                else if (ch == '-')
                {
                    if (passengersCount[passenger] == 0)
                    {
                        flag = 1;
                    }
                    else
                    {
                        passengersCount[passenger] = 0;
                        count--;
                    }
                }
                if (count > m)
                {
                    flag = 1;
                }
            }
        }
        if (flag == 1)
        {
            cout << "Inconsistent" << endl;
        }
        else if (flag == 0)
        {
            cout << "Consistent" << endl;
        }
    }
    return 0;
}