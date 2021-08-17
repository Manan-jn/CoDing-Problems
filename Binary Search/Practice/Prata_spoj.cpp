#include <iostream>
#include <algorithm>
using namespace std;
bool canCook(int time, int prata, int rank[], int l)
{
    //if all the cooks simultaneously can cook p prata in "time" amount of time
    //will give "time" amount of time to all the cooks and count the parata
    //if the parata >=p then return true
    //else return false
    int food = 0;
    for (int i = 0; i < l; i++)
    {
        int rankChef = rank[i];
        //check for l cooks
        int currentTime = 0;
        int inc = 1;
        while (currentTime + inc * rankChef <= time)
        {
            currentTime = currentTime + inc * rankChef;
            food++;
            inc++;
        }
    }
    if (food >= prata)
    {
        return true;
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long int p;
        cin >> p;
        int cooks[50];
        int l;
        cin >> l;
        for (int j = 0; j < l; j++)
        {
            cin >> cooks[j];
        }
        sort(cooks, cooks + l);
        int s = 0;
        int maxTime = 0;
        int inc = 1;
        for (int j = 0; j < p; j++)
        {
            maxTime = maxTime + inc;
            inc++;
        }
        int e = maxTime; //time taken by the fastest cook to cook all himself
        int ans = 0;
        while (s <= e)
        {
            int mid = (s + e) / 2;
            if (canCook(mid, p, cooks, l))
            {
                ans = mid;
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        cout << ans << endl;
    }
}