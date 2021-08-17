//Coding Blocks - scholorship question
#include <iostream>
using namespace std;
bool canGive(int mid, int n, int x, int y, int m)
{
    //need to check if we can give scholorship to mid number of students
    if (mid * x <= m + (n - mid) * y)
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
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        int s = 0;
        int e = n;
        int ans = 0;
        while (s <= e)
        {
            int mid = (s + e) / 2;
            if (canGive(mid, n, x, y, m))
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
}