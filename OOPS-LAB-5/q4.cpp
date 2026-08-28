#include <iostream>
using namespace std;

// Sum of integer array
int process(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
        sum += arr[i];

    return sum;
}

// Sum of floating-point array
float process(float arr[], int size)
{
    float sum = 0;

    for (int i = 0; i < size; i++)
        sum += arr[i];

    return sum;
}

// Sum of first k elements
int process(int arr[], int size, int k)
{
    int sum = 0;

    for (int i = 0; i < k && i < size; i++)
        sum += arr[i];

    return sum;
}

int main()
{
    int n, k;
    int arr[100];
    float farr[100];

    cout << "Enter size of integer array: ";
    cin >> n;

    cout << "Enter integer array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Sum of integer array = "
         << process(arr, n) << endl;

    cout << "\nEnter size of floating-point array: ";
    cin >> n;

    cout << "Enter floating-point elements:\n";
    for (int i = 0; i < n; i++)
        cin >> farr[i];

    cout << "Sum of floating-point array = "
         << process(farr, n) << endl;

    cout << "\nEnter k: ";
    cin >> k;

    cout << "Sum of first " << k << " elements = "
         << process(arr, n, k) << endl;

    return 0;
}