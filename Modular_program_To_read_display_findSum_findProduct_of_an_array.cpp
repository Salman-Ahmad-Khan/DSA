#include <iostream>
#define size 100
using namespace std;

// read the elements of an array
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
}

// addition of all the elements of an array
int add_elements(int S[], int size_a)
{
    int sum = 0;
    for (int i = 0; i < size_a; i++)
    {
        sum += S[i];
    }
    return (sum);
}

// multiplication of all the elements of an array
int product_array(int P[], int size_a)
{
    int product = 1;
    for (int i = 0; i < size_a; i++)
    {
        product *= P[i];
    }
    return (product);
}
main()

{
    // Q:Modular_program_To_read_display_findSum_findProduct_of_an_array
    int ary[size];
    cout << "Input the size of an array ";
    int n;
    cin >> n;

    set_data(ary, n);
    show_data(ary, n);

    int sum_array = add_elements(ary, n);
    cout << endl
         << "Sum of all the elements of array is " << sum_array;

    int product = product_array(ary, n);
    cout << endl
         << "Product of all the elements of array is " << product;
}