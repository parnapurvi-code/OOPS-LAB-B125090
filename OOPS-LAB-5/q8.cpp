#include <iostream>
using namespace std;

// Update integer
void update(int &x, int value)
{
    x += value;
}

// Update float
void update(float &x, float value)
{
    x += value;
}

// Update integer array
void update(int arr[], int size, int value)
{
    for (int i = 0; i < size; i++)
        arr[i] += value;
}

int main()
{
    int x = 10;
    float y = 10.5;
    int arr[] = {1, 2, 3, 4, 5};

    cout << "Integer before update: " << x << endl;
    update(x, 5);
    cout << "Integer after update: " << x << endl;

    cout << "\nFloat before update: " << y << endl;
    update(y, 2.5);
    cout << "Float after update: " << y << endl;

    cout << "\nArray before update: ";
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    update(arr, 5, 10);

    cout << "\nArray after update: ";
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    return 0;
}