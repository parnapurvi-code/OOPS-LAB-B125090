#include <iostream>
using namespace std;
int main(){
    int* num1 = new int;
    int* num2 = new int;
    cout << "enter number 1: " << endl;
    cin >> *num1;
    cout << "enter number 2: " << endl;
    cin >> *num2;
    cout << "ADDITION: " << *num1 + *num2 << endl;
    cout << "SUBSTRACTION: " << *num1 - *num2 << endl;
    cout << "MULTIPLICATION: " << *num1 * *num2 << endl;
    cout << "DIVISION: " << *num1 / *num2 << endl;
    delete num1;
    delete num2;
    num1 = nullptr;
    num2 = nullptr;
    return 0;
}