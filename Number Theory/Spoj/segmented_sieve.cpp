#include <iostream>
#include <vector>
using namespace std;

const int N = 100000;
vector<int> primes;
int p[N] = {0};
void sieve()
{
    for (int i = 2; i <= N; i++)
    {
        if (p[i] == 0)
        {
            //Store the i prime number
            primes.push_back(i);
            //Mark the multiples of i as not prime
            for (int j = i; j <= N; j += i)
            {
                p[j] = 1;
            }
        }
    }
}
int main()
{
    sieve();
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> m >> n;
        bool segment[n - m + 1];
        for (int i = 0; i < n - m + 1; i++)
        {
            segment[i] = 0;
        }
        for (auto x : primes)
        {
            //Stop the loop if remaining the prime nos are not needed
            if (x * x > n)
            {
                break;
            }
            int start = (m / x) * x;
            //prime no lies in the segmented seive range

            if (x >= m && x <= n)
            {
                start = x * 2;
            }
            //Mark all the multiples of x in the range start to n as not primes
            for (int i = start; i <= n; i += x)
            {
                segment[i - m] = 1;
            }
        }
        //Loop over range m....n and print the primes
        for (int i = m; i <= n; i++)
        {
            if (segment[i - m] == 0 && i != 1)
            {
                cout << i << endl;
            }
        }
        cout << endl;
    }
}