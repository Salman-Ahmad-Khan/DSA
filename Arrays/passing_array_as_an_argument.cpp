#include <iostream>
#define SIZE 100
using namespace std;

// void show_array(int[], int);   // function prototype
// void show_array(int* [], int); // function prototype

// defining a function
// void show_array(int C[], int size_a)
// {
//     for (int i = 0; i < size_a; i++)
//     {
//         cout << C[i] << " ";
//     }
// }

void show_array(int *ptr_array, int size_a)
{
    for (int i = 0; i < size_a; i++)
    {
        // cout << *(ptr_array + i) << " ";
        cout << *ptr_array << " ";
        ptr_array++;
    }
}
main()

{

    // Q: passing_array_as_an_argument
    int B[SIZE];
    cout << "Input the size of an array ";
    int n;
    cin >> n;

    cout << "Input the elements of an array ";
    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }

    cout << "Original array:  ";
    // show_array(B, n); // calling a show_array function
    show_array(B, n); // calling a show_array function

    cout << endl
         << "First element: " << B[0] << endl;
    cout << "Address of first element: " << &B[0] << endl;
    cout << "Address of first element(Base Address): " << B << endl;
}
