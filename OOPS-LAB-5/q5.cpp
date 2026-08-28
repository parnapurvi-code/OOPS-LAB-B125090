#include <iostream>
using namespace std;

// Swap integers using references
void swapData(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Swap floats using references
void swapData(float &a, float &b)
{
    float temp = a;
    a = b;
    b = temp;
}

// Swap integers using pointers
void swapData(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 10, b = 20;
    float x = 2.5, y = 5.5;
    int p = 100, q = 200;

    cout << "Before integer reference swap: "
         << a << " " << b << endl;

    swapData(a, b);

    cout << "After integer reference swap: "
         << a << " " << b << endl;

    cout << "\nBefore float reference swap: "
         << x << " " << y << endl;

    swapData(x, y);

    cout << "After float reference swap: "
         << x << " " << y << endl;

    cout << "\nBefore pointer swap: "
         << p << " " << q << endl;

    swapData(&p, &q);

    cout << "After pointer swap: "
         << p << " " << q << endl;

    return 0;
}