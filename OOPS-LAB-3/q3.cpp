#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int* arr = new int[n]; // pointer is initiated
    for (int i = 0 ; i < n ; i++ ){
        cout << "enter any integer: " << endl; // input taken for array
        cin >> arr[i];
    }
    int even = 0, odd = 0;
    for (int i = 0; i<n; i++){
        if (arr[i]%2 == 0){
            even++; // number of even elements
        }
        else{
            odd++; // number of odd elements
        }
    }
    cout << "number of even number: " << even;
    cout << "number of odd numbers: " << odd;
    return 0;
}
