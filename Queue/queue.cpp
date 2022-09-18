#include <iostream>
using namespace std;
#define n 10

/*
Queue:
Queue is an abstract data structure, somewhat similar to Stacks. Unlike stacks, a queue
is open at both its ends. One end is always used to insert data (enqueue) and the other is
used to remove data (dequeue). Queue follows First-In-First-Out methodology, i.e., the
data item stored first will be accessed first.


Basic Operations
Queue operations may involve initializing or defining the queue, utilizing it, and then
completely erasing it from the memory.
 Here we shall try to understand the basic
operations associated with queues −

 enqueue() − add (store) an item to the queue.
 dequeue() − remove (access) an item from the queue.
 peek() − Gets the element at the front of the queue without removing it.
 isempty() − Checks if the queue is empty.

In queue, we always dequeue (or access) data, pointed by front pointer and while
enqueing (or storing) data in the queue we take help of back pointer.


*/

class queue
{
    int *arr;
    int front;
    int back;

public:
    // constructor
    queue()
    {
        arr = new int[n]; // allocating memory to the array or creating an array of size n
        front = -1;
        back = -1;
    }

    void enqueue(int x) // or void push(int x)
    {
        if (back == n - 1)
        {
            cout << "Queue Overflow" << endl;
            return;
        }
        back++;
        arr[back] = x;

        if (front == -1)
        {
            front++;
        }
    }

    // inserting at front i.e first element

    void dequeue()
    {
        if (front == -1 || front > back)
        {
            cout << "No elements in Queue" << endl;
            return;
        }
        front++;
    }

    int peek()
    {
        if (front == -1 || front > back)
        {
            cout << "No elements in Queue" << endl;
            return -1;
        }
        return arr[front];
    }

    bool empty()
    {
        if (front == -1 || front > back)
        {

            return true;
        }
        return false;
    }
};

main()

{
    queue q;
    q.enqueue(52);
    q.enqueue(47);
    q.enqueue(51);
    q.enqueue(15);
    q.enqueue(85);

    cout << q.peek() << endl;
    q.dequeue();

    cout << q.peek() << endl;
    q.dequeue();

    cout << q.peek() << endl;
    q.dequeue();
    cout << q.peek() << endl;
    q.dequeue();

    cout << q.peek() << endl;
    q.dequeue();

    cout << q.peek() << endl;
    q.dequeue();

    // q.enqueue(15);
    // q.enqueue(85);
}