#include <iostream>
using namespace std;
//Class is like a map and we need to create objects out of it
class Node
{
public:
    int data;
    Node *next;
};

//Print the linked list
//We are recieving the head pointer
void printList(Node *n)
{
    //Iterating and printing the entire list till we reach the end of the linked list
    while (n != NULL)
    {
        cout << (n->data) << " -";
        n = n->next;
    }
}
int main()
{
    //Creating pointers to the node
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    //Allocating the nodes in the memory
    head = new Node();
    second = new Node();
    third = new Node();

    //Adding data in the nodes
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    //Need to call the print list function to print the linked list
    printList(head);

    return 0;
}