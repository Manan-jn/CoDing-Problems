//204. Count Primes
//Leetcode Easy Link: https://leetcode.com/problems/count-primes/
//Number theory
#include <iostream>
using namespace std;
class Solution
{
public:
    int countPrimes(int n)
    {
        int p[5000001] = {0};
        for (int i = 3; i < n; i += 2)
        {
            p[i] = 1;
        }
        for (long long int i = 3; i < n; i += 2)
        {
            if (p[i] == 1)
            {
                for (long long int j = i * i; j < n; j = j + i)
                {
                    p[j] = 0;
                }
            }
        }
        p[2] = 1;
        p[1] = p[0] = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (p[i] == 1)
            {
                count++;
            }
        }
        return count;
    }
};