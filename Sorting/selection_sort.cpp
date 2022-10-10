#include <iostream>
using namespace std;

main()

{

    /*
    Selection sort is a simple sorting algorithm.

    find the minimum element in unsorted array and swap it with element at begining
    or
    The smallest element is selected from the unsorted array and swapped with the leftmost
    element, and that element becomes a part of the sorted array.
    */
    cout << "Input the size of array ";
    int n;
    cin >> n;

    int arr[n];
    cout << "Input the elements of array ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}