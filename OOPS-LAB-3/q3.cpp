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
    int even = 0, odd = 0;
    for (int i = 0; i<n; i++){
        if (arr[i]%2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout << "number of even number: " << even;
    cout << "number of odd numbers: " << odd;
    return 0;
}