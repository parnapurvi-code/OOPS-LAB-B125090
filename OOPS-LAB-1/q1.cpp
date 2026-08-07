#include<iostream>
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
    int max = 0;
    int min = arr[0];
    float sum = 0;
    for(int i = 0; i<n; i++){
        sum = sum + arr[i];
        if (max < arr[i]){
            max = arr[i];
        }
        if (min > arr[i]){
            min = arr[i];
        }
    }
    cout << " max: " << max;
    cout << "min:" << min;
    cout << "avg:" << sum/n;
    return 0;
}