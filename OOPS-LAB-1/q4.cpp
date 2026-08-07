#include <iostream>
using namespace std;
void swapnumbers(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int num1;
    int num2;
    cout << "enter first number: ";
    cin >> num1;
    cout << "enter second number: ";
    cin >> num2;
    swapnumbers(&num1, &num2);
    cout << "num1 " << num1;
    cout << "num2 " << num2;
    return 0;
}