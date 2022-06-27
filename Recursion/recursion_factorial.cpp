#include <iostream>
using namespace std;

// recursive method
long long int factorial_of_numb(long long int num)
{

    long long int result = 1;
    // base case
    if (num == 0 || num == 1)
        return 1;
    else
        result = num * factorial_of_numb(num - 1);
    return (result);
}

// iterative method
// long long int factorial_of_numb(long long int num)
// {

//     long long int result = 1;
//     for (int i = num; i >= 1; i--)
//         result *= i; // result = result*i;

//     return (result);
// }

main()

{
    // recursive function to calculate the factorial of a number

    cout << "Input a number ";
    long long int numb;
    cin >> numb;

    if (numb < 0)
        cout << endl
             << "Factorial of NEGATIVE number is NOT defined." << endl
             << "Please input a VALID number.";

    cout << "Factorial of " << numb << " is " << factorial_of_numb(numb);
}