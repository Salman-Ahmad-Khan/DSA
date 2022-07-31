#include <iostream>
using namespace std;

/*
What is a linked List?
- Linked list is a data structure used for storing collections of data.
- Linked List has the following properties
- Successive elements are connected by pointers
- Last element points to NULL
-It can grow or shrink size during execution of a program
- It can be made just as long as required
- It does not waste memory space


What is node?
• When we talk about storing list of information, each information set is a node which also plays a role of connection point in the list.




Arrays: Single block of memory with partitions

Linked list: Multiple blocks of memory linked to each other



Limitations in arrays:
> Fixed size
> Contiguous block of memory
> Inserting or deleting is costly



Properties of Linked List:
> Size can be modified
> Non-contiguous memory
> Insertion and deletion at any point is easier

*/

class node
{
public:
    int data;
    node *next;

    node(int value) // constructor i.e creates a node
    {
        data = value;
        next = NULL;
    }
};

// inserting a new node at head
void inserAtHead(node *&head, int value)
{

    node *n = new node(value);
    n->next = head;
    head = n;
}

// inserting a new node at tail
void insertAtTail(node *&head, int value)
{

    node *n = new node(value); // creating a new node

    if (head == NULL)
    {             // if linked list doesnt have any node
        head = n; //   point head to n ,(first node that we have created)
        // head stores the address of first node i.e of n

        //  return;  //or put else block
    }
    else
    // traversing
    {
        node *temp = head; // iterator
        while (temp->next != NULL)
        {
            temp = temp->next; // move the temp to next node
        }
        temp->next = n;
    } // it adds the node that we are supposed to  create
}

// deletion in linked list
// to delete nth node in linked list we have to link (n-1)th node to (n+1)th node. i.e we have to store the address of next field of (n+1)th node in the next field of (n-1)th node

// delete first node
void deleteAtHead(node *&head)
{

    node *to_delete = head; // store the address of first node(head) in temp
    head = head->next;      // first node stores the address of second node, assign that very address in head so that second node becomes the first node 😂😂

    delete to_delete; // delete the first node
}

// delete a particular node
void deletion(node *&head, int del_value)
{
    if (head == NULL)
        cout << "Can't delete, Linked List is empty" << endl;
    // {
    //     return;
    // }
    if (head->next == NULL) // if linked list contains one node only
    {
        deleteAtHead(head);
        // return;
    }

    else
    {
        node *temp = head;
        while (temp->next->data != del_value)
        {
            temp = temp->next;
        }
        node *to_delete = temp->next;
        temp->next = temp->next->next;

        delete to_delete;
    }
}
// printing

void display(node *head)
{
    node *temp = head; // iterator
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next; // move the temp to next node
    }
    cout << "NULL" << endl;
}

// searching in linked list
bool search(node *head, int key)
{

    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next; // iterator ,move the temp to next node
    }
    return false;
}
main()

{

    node *head = NULL; // linked list is empty
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    display(head);
    inserAtHead(head, 454);
    display(head);
    cout << search(head, 5) << endl;
    deletion(head, 3);
    display(head);
    deleteAtHead(head);
    display(head);
    deleteAtHead(head);
    display(head);
    deletion(head, 2);
    display(head);
    deletion(head, 8);
    display(head);
}