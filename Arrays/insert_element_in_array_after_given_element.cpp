#include <iostream>
#define MAX_SIZE 100
using namespace std;

void set_data(int B[], int size_a)
{

    cout << "Input the elements of an array ";
    for (int i = 0; i < size_a; i++)
    {
        cin >> B[i];
    }
}

// printing the array
void show_data(int D[], int size_a)
{

    cout << "Original array ";
    for (int i = 0; i < size_a; i++)
    {
        cout << D[i] << " ";
    }
    cout << endl;
}

main()

{
    int ARR[MAX_SIZE];
    cout << "Input the size of an array ";
    int size;
    cin >> size;

    set_data(ARR, size);
    show_data(ARR, size);

    cout << "Please input the element you want to insert ";
    int item;
    cin >> item;

    cout << "Input the position at which you want to insert an element ";
    int position;
    cin >> position;

    if (position <= size && position >= 0)
    {
        for (int i = size; i > position; i--)
        {
            ARR[i] = ARR[i - 1];
        }
        ARR[position] = item;
    }
    else
        cout << "Invalid position";

    cout << " Array after inserting '" << item << "', ";
    for (int i = 0; i <= size; i++)
    {
        cout << ARR[i] << " ";
    }
}