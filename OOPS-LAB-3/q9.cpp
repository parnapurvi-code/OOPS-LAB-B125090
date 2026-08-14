#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
using namespace std;

class Employee {
    int id;
    string name;
    double salary;
public:
    Employee() : id(0), name(""), salary(0.0) {}
    void accept() {
        cout << "Enter ID: ";
        while(!(cin >> id)){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid ID. Enter again: ";
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Salary: ";
        while(!(cin >> salary)){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid salary. Enter again: ";
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    void display() const {
        cout << "ID: " << id << "\n";
        cout << "Name: " << name << "\n";
        cout << fixed << setprecision(2) << "Salary: " << salary << "\n";
    }
    double getSalary() const { return salary; }
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    if(!(cin >> n) || n <= 0) {
        cout << "Invalid number of employees. Exiting.\n";
        return 1;
    }

    Employee *arr = new Employee[n];

    for(int i = 0; i < n; ++i) {
        cout << "\nEnter details for employee " << (i+1) << ":\n";
        arr[i].accept();
    }

    cout << "\nAll employee details:\n";
    for(int i = 0; i < n; ++i) {
        cout << "\nEmployee " << (i+1) << ":\n";
        arr[i].display();
    }

    // Find employee with highest salary and compute average
    int idxMax = 0;
    double sum = 0.0;
    for(int i = 0; i < n; ++i) {
        if(arr[i].getSalary() > arr[idxMax].getSalary()) idxMax = i;
        sum += arr[i].getSalary();
    }

    cout << "\nEmployee with highest salary:\n";
    arr[idxMax].display();

    cout << "\nAverage salary: " << fixed << setprecision(2) << (sum / n) << "\n";

    delete[] arr;
    return 0;
}