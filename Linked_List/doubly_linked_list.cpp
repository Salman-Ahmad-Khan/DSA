#include <iostream>
using namespace std;

/*
Doubly Linked List is a variation of Linked list in which navigation is possible in both ways,
either forward and backward easily as compared to Single Linked List.

Each node of Doubly Linked List has three fields;
1.Data
2.Next − Each link of a linked list contains a link to the next link called Next.
3.Prev − Each link of a linked list contains a link to the previous link called Prev.

• Doubly linked list contains one extra pointer as compare to the node of singly linked list. From any node we can traverse in both the direction*/

class node
{
public:
    int data;
    node *next;
    node *previous;

    node(int value)
    {
        data = value;
        next = NULL;
        previous = NULL;
    }
};
void insertAtHead(node *&head, int value)
{
    node *newNode = new node(value);

    newNode->next = head;
    if (head != NULL) // if linked list is not  empty
    {
        head->previous = newNode;
    }
    head = newNode;
}

void inserAtTail(node *&head, int value)
{
    node *newNode = new node(value);

    if (head == NULL)
    {
        head = newNode;
        // insertAtHead(head, value);
    }
    else

    {

        node *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->previous = temp;
    }
}
void deleteAtHead(node *&head)
{
    node *to_delete = head;
    head = head->next;
    head->previous = NULL;

    delete to_delete;
}
void deletion(node *&head, int position)
{

    if (position == 1)
    {
        deleteAtHead(head);
        return;
    }

    node *temp = head;
    int count = 1;

    while (temp != NULL && count != position)
    {
        temp = temp->next;
        count++;
    }

    temp->previous->next = temp->next;

    if (temp->next != NULL)
        temp->next->previous = temp->previous;

    delete temp;
}

void display(node *head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next; // move to the next node
    }
    cout << "NULL" << endl;
}

main()
{
    node *head = NULL;

    inserAtTail(head, 41);
    inserAtTail(head, 5);
    inserAtTail(head, 1);
    inserAtTail(head, 4);
    display(head);
    insertAtHead(head, 94);
    display(head);
    deletion(head, 4);
    display(head);
    deletion(head, 1);
    display(head);
}