#include <iostream>
using namespace std;

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