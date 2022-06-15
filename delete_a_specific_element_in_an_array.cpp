#include <iostream>
using namespace std;

//  Q:delete_a_specific_element_in_an_array
main()
{
    int ary[10] = {1, 2, 3, 4, 5, 6, 78, 9, 12, 14};

    cout << "Original array " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << ary[i] << " ";
    }

    cout << endl
         << "Input an element you want to delete ";
    int item;
    cin >> item;
    for (int i = 0; i < 10; i++)
    {
        if (ary[i] == item)
            ary[i] = -1;
    }

    cout << "Deleted a specific element(" << item << ") successfully." << endl;

    cout << "Array after deleting a specific element(" << item << ")" << endl;
    for (int i = 0; i < 10; i++)
    {
        if (ary[i] != -1)
            cout << ary[i] << " ";
    }
}