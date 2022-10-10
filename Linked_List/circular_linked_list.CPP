
#include <iostream>
using namespace std;
/*
Circular Linked List is a variation of Linked list in which the first element points to the last
element  and  the  last  element  points  to  the  first  element.  Both  Singly  Linked  List  and
Doubly Linked List can be made into a circular linked list.
*/

/*
Singly Linked List as Circular
In singly linked list, the next pointer of the last node points to the first node.
*/

class node
{
public:
    int data;
    node *next;

    node(int value)
    {
        data = value;
        next = NULL;
    }
};
void insertAtHead(node *&head, int value)
{
    node *newNode = new node(value);

    if (head == NULL) // if linked list is empty
    {
        newNode->next = newNode;
        head = newNode;
        return;
    }
    node *temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = newNode;

    newNode->next = head;
    head = newNode;
}

void insertAtTail(node *&head, int value)
{

    if (head == NULL)
    {
        insertAtHead(head, value);
        return;
    }
    node *newNode = new node(value);

    node *temp = head;
    while (temp->next != head) // the next pointer of the last node points to the first node.
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
}
void deleteAtHead(node *&head)
{
    node *temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }
    node *to_delete = head;
    temp->next = head->next;
    head = head->next;

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

    while (count != position - 1)
    {
        temp = temp->next;
        count++;
    }
    node *to_delete = temp->next;
    temp->next = temp->next->next;

    delete to_delete;
}

void display(node *head)
{
    node *temp = head;
    do
    {
        cout << temp->data << " -> ";
        temp = temp->next; // traverse
    } while (temp != head);
    cout << "NULL" << endl;
}
main()

{
    node *head = NULL;
    insertAtHead(head, 499);
    display(head);
    insertAtTail(head, 51);
    insertAtTail(head, 32);
    insertAtTail(head, 8);
    insertAtTail(head, 4);
    insertAtTail(head, 9);
    display(head);
    insertAtHead(head, 49);
    display(head);
    deletion(head, 3);
    display(head);
    deletion(head, 1);
    display(head);
    deleteAtHead(head);
    display(head);
}