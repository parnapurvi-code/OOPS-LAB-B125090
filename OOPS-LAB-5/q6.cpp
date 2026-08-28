#include <iostream>
using namespace std;
int information(char arr[])
{
    int length = 0;

    while (arr[length] != '\0')
        length++;

    return length;
}

int information(char arr[], int size, char key)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            count++;
    }

    return count;
}


int information(char arr[], int size, char key, int k)
{
    int count = 0;

    for (int i = 0; i < k && i < size; i++)
    {
        if (arr[i] == key)
            count++;
    }

    return count;
}

int main()
{
    char str[100];
    char key;
    int k;

    cout << "Enter a string: ";
    cin >> str;

    cout << "Length of string = "
         << information(str) << endl;

    cout << "\nEnter character to count: ";
    cin >> key;

    int size = information(str);

    cout << "Total occurrences = "
         << information(str, size, key) << endl;

    cout << "\nEnter k: ";
    cin >> k;

    cout << "Occurrences in first " << k
         << " positions = "
         << information(str, size, key, k) << endl;

    return 0;
}