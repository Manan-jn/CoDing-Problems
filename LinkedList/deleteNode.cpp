//Program to delete a Node
//A) with the given key
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
    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}
void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

//Function to delete a node having particular value or key
void deleteNode(Node **head, int key)
{
    //temp will point to the node to be deleted
    Node *temp = *head;
    //prev will point to the prev node
    Node *prev = NULL;
    //If head is the node to be deleted
    if (temp != NULL && temp->data == key)
    {
        *head = temp->next;
        delete (temp);
        return;
    }
    //Otherwise find the prev and temp
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
    {
        return;
    }
    //Unlink the temp node
    prev->next = temp->next;
    //Delete the node
    delete (temp);
}

//Function to delete the node using recursion
void deleteRec(Node **head, int key)
{
    if ((*head) == NULL)
    {
        return;
    }
    if ((*head)->data == key)
    {
        //Delete the node if found
        Node *temp = *head;
        (*head) = temp->next;
        delete (temp);
        return;
    }
    //change the pointer
    deleteRec(&((*head)->next), key);
}
int main()
{
    Node *head = NULL;
    pushFront(&head, 6);
    pushFront(&head, 8);
    pushFront(&head, 10);
    printList(head);
    deleteNode(&head, 8);
    deleteRec(&head, 10);
    printList(head);
    return 0;
}