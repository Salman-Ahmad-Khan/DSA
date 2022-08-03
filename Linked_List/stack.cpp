#include <iostream>
using namespace std;
/*
What is STACK?
• A stack is a list of elements in which an element may be inserted or deleted only at one end, called the top of the stack.
• Stack is a specialized data storage structure (Abstract data type).

Array and STACK
• Unlike arrays, access of elements in a stack is restricted.
It has two main functions push and pop
• Insertion in a stack is done using push function and removal from a stack is done using pop function.


Representation
• Stack allows access to only the last element inserted hence, an item can be inserted or removed from the stack from one end called the top of the stack.
• It is therefore, also called Last-In First-Out (LIFO) list

Implementation
• Stack can be implemented as
- Array
- Dynamic Array
- Linked List
*/

// #define size 100 // size of array
unsigned size; // store only positive value

// stack implementaion through array
class stack
{

    int *arry; // dynamically creating an array
    int top;

public:
    stack() // constructor
    {
        cout << "Input the size of an array ";
        cin >> size;

        arry = new int[size]; // allocating memory to the array
        // new operator creates the block of memory, returns the address that is stored in the pointer variable ,arry
        //  we can set the size as predefined or take from the user
        top = -1;
    }
    // inserting an element on the top of stack
    void push(int data)
    {
        if (top == size - 1) // if top is equal to size of an array
        {
            cout << "OVERFLOW,no element to push, can't insert data" << endl;
            return;
        }
        top++;
        arry[top] = data;
    }

    // removing an element from the top of stack
    void pop()
    {
        if (top == -1) // if stack is empty
        {
            cout << "no elemet to pop, can't remove an element ,stack is empty" << endl;
            return;
        }
        top--;
    }

    // return an top element of stack

    int Top()
    {

        if (top == -1)
        {
            cout << "no element to return, stack is empty" << endl;
            return -1;
        }

        return arry[top];
    }

    // to check stack is empty
    bool empty()
    {

        if (top < 0)
            return true;
        else
            return false;

        // or
        // return top == -1;
    }
};

main()

{

    stack st;
    st.push(21);
    st.push(1);
    st.push(212);
    st.push(821);
    st.push(921);
    cout << st.Top() << endl;
    st.pop();
    cout << st.Top() << endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout << st.empty();
}