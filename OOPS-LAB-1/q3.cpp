#include<iostream>
using namespace std;
int main() {
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
    int key;
    cout << "enter the element to search: ";
    cin >> key;
    int sum = 0;
    for (int i=0; i<n; i++){
        if(arr[i]==key){
            cout << "element found at: " << i;
            sum = sum + 1;
        }
    
    }
    if (sum == 0){
        cout << "element not found";}
    return 0;
    }
