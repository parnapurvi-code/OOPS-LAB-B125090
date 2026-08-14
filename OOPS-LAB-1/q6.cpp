#include <iostream>
#include <iomanip>
using namespace std;
struct student{
    int rollno;
    string name;
    float marks;
};
int main(){
    student s[5];
    cout << "enter details of 5 students: ";
    for (int i =0; i <5; i++){
        cout << "student" << i+1 << endl;
        cout << "rollno. :";
        cin >> s[i].rollno;
        cout << "name: ";
        cin >> s[i].name;
        cout << "marks: ";
        cin >> s[i].marks;
    }
    for (int i = 0; i < 5; i++){
        cout << s[i].rollno << s[i].name << s[i].marks << endl;
    }
    return 0;
}
    
