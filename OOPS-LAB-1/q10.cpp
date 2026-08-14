#include <iostream>
#include <cstdlib>

using namespace std;

struct student {
    int rollNumber;
    char name[100];
    float marks;
};

int main() {
    int n;
    student* s;

    cout << "Enter number of students: ";
    cin >> n;
    student* ptr = (student*)malloc(n * sizeof(student));
    int max = 0;
    int a = 0;
    for (int i = 0; i < n; i++){
        cout << "Enter details for student " << i + 1 << endl;
        cout << "Roll Number: ";
        cin >> ptr[i].rollNumber;
        cout << "Name: ";
        cin >> ptr[i].name;
        cout << "Marks: ";
        cin >> ptr[i].marks;

        if (ptr[i].marks > max) {
            max = ptr[i].marks;
            a = i;
        }
    }
    cout << "\nStudent with highest marks:\n";
    cout << "Roll Number: " << ptr[a].rollNumber << endl;
    cout << "Name: " << ptr[a].name << endl;
    cout << "Marks: " << ptr[a].marks << endl;

    free(ptr);
    return 0;
}