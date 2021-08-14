//Spoj Aggressive cows problem
//Link-https://www.spoj.com/problems/AGGRCOW/
//Binary search problem
#include <iostream>
#include <algorithm>
using namespace std;

bool canPlaceCows(int stalls[], int n, int c, int min_sep)
{
    int last_cow = stalls[0];
    //place the first cow in the first stall
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (stalls[i] - last_cow >= min_sep)
        {
            last_cow = stalls[i];
            cnt++;
            if (cnt == c)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int t; //test cases
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n; //stalls number
        cin >> n;
        int cows;
        cin >> cows; //cows number
        int stalls[n];
        for (int i = 0; i < n; i++)
        {
            cin >> stalls[i];
            //taking the input of the x coordinate of the stalls
        }
        sort(stalls, stalls + n);
        // int stalls[] = {1, 2, 4, 8, 9};
        // int n = 5;
        // int cows = 3;

        //binary search algorithm
        int s = 0;
        int e = stalls[n - 1] - stalls[0];

        int ans = 0;
        while (s <= e)
        {
            int mid = (s + e) / 2;

            bool cowsRakhPaye = canPlaceCows(stalls, n, cows, mid);
            if (cowsRakhPaye)
            {
                ans = mid;
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}