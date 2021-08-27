//771. Jewels and Stones
//Leetcode easy
//Link :https://leetcode.com/problems/jewels-and-stones/
#include <iostream>
#include <cstring>
using namespace std;
class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        int jewels_length = jewels.size();
        int stones_length = stones.size();
        int count = 0;
        for (int i = 0; i < stones_length; i++)
        {
            for (int j = 0; j < jewels_length; j++)
            {
                if (stones[i] == jewels[j])
                {
                    count++;
                }
            }
        }
        return count;
    }
};