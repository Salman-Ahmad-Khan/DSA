#include <iostream>
#define size 100
using namespace std;

main()
{

    //  Q:deletion_in_an_array_and_reduce_the_size_of_an_array
    int A[size];
    cout << "Input the size of an array ";
    int n;
    cin >> n;

    cout << "Input the elements of an array ";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    cout << "Original array " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl
         << "Input an element you want to delete ";
    int item;
    cin >> item;

    // search an element to delete and track its position(index number)
    int position;
    for (int i = 0; i < 10; i++)
    {
        if (A[i] == item)
            position = i;
        break;
    }

    // overwrite elements and reduce the size of an array
    for (int i = position; i < n - 1; i++)
    {
        A[i] = A[i + 1];
        n = n - 1;
    }

    // printing the final array

    cout << "Deleted a specific element(" << item << ") successfully." << endl;
    cout << "Array after deleting a specific element(" << item << ")" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}