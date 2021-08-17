//Under Progress
#include <iostream>
using namespace std;
bool isPossible(int time, int painters, int boardsLength[], int sum, int n)
{
    //need to check if it is possible to paint
    //all the boards in "mid" amount of time
    int boards = 0;
    //will bring painters one by one
    //will give them time and count their number of boards
    //will check if the number of boards >= sum of boardslength
    //return true;
    for (int i = 0; i < painters; i++)
    {
        int currentTime = 0;
        while (currentTime <= time)
        {
            for (int j = 0; j < n; j++)
            {
                int board = boardsLength[j];
                currentTime += board;
                boards++;
                if (currentTime > time)
                {
                    break;
                }
            }
        }
    }
    if (boards >= n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int k;
    cin >> k;
    int n;
    cin >> n;
    int boardsLength[10];
    for (int i = 0; i < n; i++)
    {
        cin >> boardsLength[i];
    }
    int s = boardsLength[n - 1];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + boardsLength[i];
    }
    int e = sum;
    int ans = 0;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (isPossible(mid, k, boardsLength, sum, n))
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
    return 0;
}
