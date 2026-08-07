#include <iostream>
using namespace std;
int main(){
    cout << "enter number n inteagers";
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cout << "enter any number";
        int a;
        cin >> a;
        arr[i] = a;
    }
    int sum = 0;
    int* ptr = arr;
    for(int i = 0; i<n; i++){
        sum+=*ptr;
        ptr++;
    }
    cout << "sum: "<< sum;
    return 0;
}