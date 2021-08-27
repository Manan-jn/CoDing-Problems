//1108. Defanging an ip Address;
//Leetcode Easy
//Strings
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
class Solution
{
public:
    string defangIPaddr(string address)
    {
        int n = address.size();
        string str = "[.]";
        for (int i = 0; i < n; i++)
        {
            if (address[i] == '.')
            {
                address.erase(i, 1);
                address.insert(i, str);
                n = n + 3;
                i = i + 3;
            }
        }
        return address;
    }
};