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
    int left=0;
    int right = n-1;
    int temp;
    while (left<right){
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}