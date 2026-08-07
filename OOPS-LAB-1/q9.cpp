#include <iostream>
#include <string>
#include <limits>

using namespace std;

struct student {
    int rollNumber;
    string name;
    float marks;
};

int main() {
    student s;
    student* ptr = &s;
    cout << "enter roll number: ";
    cin >> ptr->rollNumber;
    cout << "Enter name: ";
    cin >> ptr->name;
    cout << "Enter marks: ";
    cin >> ptr->marks;
    cout << "\nStudent details:\n";
    cout << "Roll Number: " << ptr->rollNumber << endl;
    cout << "Name: " << ptr->name << endl;
    cout << "Marks: " << ptr->marks << endl;

    return 0;
}
