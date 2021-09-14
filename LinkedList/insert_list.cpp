#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
void pushFront(Node **head, int data)
{
    //Need to add the node at the front

    //Allocating a new node
    Node *new_node = new Node();
    //Adding data
    new_node->data = data;
    //Changing the pointers
    new_node->next = (*head);
    *head = new_node;
}
//Function to add the node after given node
void insertAfter(Node *prev, int data)
{
    //if the prev node is null then return
    if (prev == NULL)
    {
        //Previous node cannot be NULL
        return;
    }
    //Allocate new node
    Node *new_node = new Node();
    //Add data
    new_node->data = data;
    //Change pointers
    new_node->next = prev->next;
    prev->next = new_node;
}

//Function to add a node at the end of the linked list
void append(Node **head, int data)
{
    //Allocate new node
    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;
    //If head is the last node
    if (*head == NULL)
    {
        //change pointer and return
        *head = new_node;
        return;
    }
    //otherwise change
    Node *last = *head;
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
}

//Function to print the linked list
void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    Node *head = NULL;
    pushFront(&head, 6);
    append(&head, 10);
    insertAfter(head->next, 8);

    printList(head);

    return 0;
}