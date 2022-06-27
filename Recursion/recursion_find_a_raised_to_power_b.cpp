#include <iostream>
using namespace std;

// recursive approach
int power(int p, int q)
{

    if (q == 0)
        return (1);
    else if (q == 1)
        return (p);
    else
        return (p * power(p, (q - 1)));
}

// iterative approach
// int power(int p, int q)
// {

//     int result = 1;
//     for (int i = 0; i < q; i++)
//     {
//         result *= p;
//     }
//     return (result);
// }

main()
// program to find a raised to power b
{

    cout << "Input two positive numbers ";
    int m, n;
    cin >> m >> n;

    if (m < 0 && n < 0)
    {
        cout << m << " and " << n << " are NOT positive numbers." << endl
             << "Please input positive numbers.";
    }
    else if (m > 0 && n < 0)
    {
        cout << n << " is NOT a positive number." << endl
             << "Please input positive number.";
    }
    else if (m < 0 && n > 0)
    {
        cout << m << " is NOT a positive number." << endl
             << "Please input positive number.";
    }

    cout << m << " raised to power " << n << " is " << power(m, n);
}