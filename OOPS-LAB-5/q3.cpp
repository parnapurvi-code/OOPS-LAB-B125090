#include <iostream>
using namespace std;
void check(int n){
    if(n>0)
        cout << "the number is positive." << endl;
    else if (n<0)
        cout << "the number is negative." << endl;
    else
        cout << "the number is zero." << endl;
}
void check(char ch){
    if(ch>='A'&&ch<='Z')
        cout << "The character is uppercase." << endl;
    else if(ch>='a'&&ch<='z')
        cout << "The character is lowercase." << endl;
    else
        cout << "The character is not an alphabet."<< endl;
}
void check(char arr[], int size, char key){
    bool found = false;
    for(int i = 0; i< size; i++){
        if(arr[i]==key){
            cout << "Character found at position" << i << endl;
            found = true;
            break;
        }
    }
    if(!found)
        cout << "Character not found." << endl;
}
int main(){
    int n;
    char ch;
    char arr[100];
    int size, key;
    cout << "Enter an integer: ";
    cin >> n;
    check(ch);
    cout << "\nEnter size of character array: ";
    cin >> size;
    cout << "Enter characters:\n";
    for(int i = 0; i<size; i++)
        cin >> arr[i];
    cout << "Enter character to search: ";
    cin>>ch;
    check(arr, size, ch);
    return 0;
}