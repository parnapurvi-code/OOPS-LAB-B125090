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
    cout << "enter details of students:" << endl;
    for (int i=0 ; i<5 ; i++){
        cout << "student" << i << endl;
        cout << "rollno. :";
        cin >> s[i].rollno;
        cout << "name: ";
        cin >> s[i].name;
        cout << "marks: ";
        cin >> s[i].marks;
    }
    int max = 0;
    int sum = 0;
    int a;
    for (int i=0; i<5; i++){
        if (max<s[i].marks){
            max = s[i].marks;
            a = i;
        }
        sum = sum + s[i].marks;
    }
    cout << "highest scorer:" << endl;
    cout << s[a].rollno << endl << s[a].name << endl << s[a].marks << endl;
    cout << "average: " << sum/5;
    return 0;
}