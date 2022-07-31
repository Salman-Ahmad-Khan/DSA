#include <iostream>
using namespace std;

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

void inserAtHead(node *&head, int value)
{
    node *newNode = new node(value);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(node *&head, int value)
{
    node *newNode = new node(value);
    if (head == NULL)
    {
        head = newNode;
    }
    else

    {
        node *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void display(node *head)
{

    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

main()

{

    node *head = NULL;
    insertAtTail(head, 45);
    insertAtTail(head, 25);
    insertAtTail(head, 89);
    display(head);
    inserAtHead(head, 53);
    display(head);
}