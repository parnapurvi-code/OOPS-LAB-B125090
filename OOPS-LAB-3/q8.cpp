#include <iostream>
using namespace std;
void input(int *arr, int n){
    for (int i = 0 ; i < n ; i++ ){
        cout << "enter any integer: " << endl;
        cin >> arr[i];
    }
}
int summation(int *arr, int n){
    int sum = 0;
    for (int i =0; i <n ; i++){
        sum += arr[i];
    }
    return sum;
}
int minimum(int* arr, int n){
    int min = arr[0];
    for (int i = 1; i<n; i++){
        if (arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}
int maximum(int* arr, int n){
    int max = arr[0];
    for (int i = 1; i<n; i++){
        if (arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
void display(int sum, int min, int max){
    cout << "SUM: " << sum << endl;
    cout << "MIN: " << min << endl;
    cout << "MAX: " << max << endl;
}
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int* arr = new int[n];
    input(arr, n);
    int tsum = summation(arr, n);
    int min = minimum(arr, n);
    int max = maximum(arr, n);
    display(tsum, min, max);
    delete[] arr;
    arr = nullptr;
    return 0;
    
}