#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int* arr = new int[n];
    for (int i = 0 ; i < n ; i++ ){
        cout << "enter any integer: " << endl;
        cin >> arr[i];
    }
    for (int i = n-1 ; i>=0 ; i-- ){
        cout << arr[i] << endl;
    }
    delete[] arr;
    arr = nullptr;
    return 0;
}