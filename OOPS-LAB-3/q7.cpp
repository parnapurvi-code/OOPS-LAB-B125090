#include <iostream>
#include <cctype>
using namespace std;
int main(){
    int n;
    cout << "enter the maximum length of the character array: ";
    cin >> n;
    cin.ignore();
    char* str = new char[n];
    cout << "enter the string: "; // string input
    cin.getline(str, n);
    int vowels = 0, consonants =0, digits =0, spaces =0;
    for(int i =0; str[i] != '\0'; i++){
        char ch = str[i];
        if(isalpha(ch)){
            char lowerch = tolower(ch);
            if (lowerch == 'a' || lowerch == 'e' || lowerch == 'i' || lowerch == 'o' || lowerch == 'u'){
                vowels++;
            }
            else{
                consonants++;
            }
        
        }
        else if (isdigit(ch)){
            digits++;
        }
        else if (isspace(ch)){
            spaces++;
        }
    }
    cout << "vowels: " << vowels << endl; // displaying details
    cout << "consonants: " << consonants << endl;
    cout << "digits: " << digits << endl;
    cout << "spaces: " << spaces << endl;
    return 0;
}
