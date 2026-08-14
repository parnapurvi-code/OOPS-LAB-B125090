#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n: "; // input for n
    cin >> n;
    int* arr = new int[n];
    for (int i = 0 ; i < n ; i++ ){
        cout << "enter any integer: " << endl; // input taken for array
        cin >> arr[i];
    }
    int key;
    cout << " enter the integer you want to search: " << endl; // linear search
    cin >> key;
    int foundindex = -1;
    for (int i = 0; i < n; i++ ){
        if (arr[i]==key){
            foundindex = i;
            break;}
    }
    if(foundindex == -1){
        cout << "element not found" << endl;
    }
    else{
        cout << " element foun at index " << foundindex << endl;
    }
}
