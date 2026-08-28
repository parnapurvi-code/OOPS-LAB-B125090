#include <iostream>
using namespace std;

// Display integer
void inspect(int x)
{
    cout << "Integer value: " << x << endl;
}

// Display value using pointer
void inspect(int *ptr)
{
    cout << "Value using pointer: " << *ptr << endl;
}

// Display array using pointer
void inspect(int *ptr, int size)
{
    cout << "Array elements: ";

    for (int i = 0; i < size; i++)
        cout << *(ptr + i) << " ";

    cout << endl;
}

int main()
{
    int x = 50;

    int arr[] = {10, 20, 30, 40, 50};

    inspect(x);

    inspect(&x);

    inspect(arr, 5);

    return 0;
}