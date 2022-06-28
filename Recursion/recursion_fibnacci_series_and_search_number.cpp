#include <iostream>
using namespace std;

int fibonacci(int);
void search_in_fibonacci(int);
int terms, i = 1;

main()

{

    // program for fibonacci series
    cout << "Which term of Fibonacci Series you want to see,please input its position ";
    int term;
    cin >> term;

    // printing a particular term if Fibonacci Series
    cout << "The " << term << "th of term of Fibonacci Series is " << fibonacci(term) << endl; // calling fibonacci function

    cout << "Input the number of terms you want to see in Fibonacci Series ";
    cin >> terms;

    // printing the whole series
    cout << "The " << terms << " terms of Fibonacci Series are ";

    while (i <= terms)
    {
        cout << fibonacci(i) << " "; // calling fibonacci function
        i++;
    }

    cout << endl
         << "Input the number you want to search in the Fibonacci Series ";
    int key;
    cin >> key;
    search_in_fibonacci(key);
}

int fibonacci(int num)
{
    // Base cases
    if (num == 1)
        return 0;
    else if (num == 2 || num == 3)
        return 1;

    else
        return (fibonacci(num - 1) + fibonacci(num - 2)); // recursively calling a function
}

// searching
void search_in_fibonacci(int search)
{

    for (i = 1; i <= terms; i++)
    {
        if (search == fibonacci(i)) // found a match
        {
            cout << endl
                 << "Congratulations!\nThe entered number '" << search << "' is in the Fibonaci Series at index number, '" << i << "'";
            break;
        }
    }
    if (i == terms) // loop has completed all iterations
    {
        cout << endl
             << "Sorry\nThe number you are searching(" << search << ") is nowhere in the Fibonaci Series" << endl;
    }
}
