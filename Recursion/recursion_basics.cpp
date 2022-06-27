#include <iostream>
using namespace std;

// recursive function to calculate the sum
int sum_nat_num(int nat_numb)
{
    int sum = 0;
    // base case
    if (nat_numb == 1)
        return (1);
    else
        sum = (nat_numb + sum_nat_num(nat_numb - 1)); // recursive call
    return (sum);
}

main()

{
    /*
    Recursion:
• Any function which calls itself is called recursive.

• A recursive method solves a problem by calling a copy of itself to work on a smaller problem.

• It is important to ensure that the recursion terminates.

• Each time the function call itself with a slightly simpler version of the original problem.


Why recursion?
• Recursive code is generally shorter and easier to write than iterative code.


Recursion:
• It terminates when a base case is reached.

• Each recursive call requires extra space on the stack frame (i.e. Memory).

• Solution to some problems are easier to formulate recursively.


    */

    /*program to find the sum of first n natural numbers using functions(RECURSION)*/

    cout << "Input a natural number ";
    int nat_num;
    cin >> nat_num;

    if (nat_num <= 0)
        cout << endl
             << nat_num << " is NOT a natural number." << endl
             << "Please input a VALID natural number.";

    cout << "the sum of first " << nat_num << " natural number(s) is '" << sum_nat_num(nat_num) << "'."; // calling a function
}