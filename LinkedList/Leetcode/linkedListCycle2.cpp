//142. Linked List Cycle II
//Medium Problem
//Leetcode Link: https://leetcode.com/problems/linked-list-cycle-ii/

//HINT:: Using Floyd's Circle
//Use of slow and fast pointers, first slow will move at X at fast at 2X when they will
//meet then after that slow comes to head and both move X and now they will meet at
//The start of the cycle

#include <iostream>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow)
            {
                slow = head;
                if (slow == fast)
                {
                    return slow;
                }
                while (fast != NULL && fast->next != NULL)
                {
                    fast = fast->next;
                    slow = slow->next;
                    if (slow == fast)
                    {
                        return slow;
                    }
                }
            }
        }
        return NULL;
    }
};