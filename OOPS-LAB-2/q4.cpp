#include <iostream>
#include <string>
using namespace std;

class hotel{
    int room_number;
    string name;
    int number_of_days;
    int cost_per_day;
    int cost;
    public:
    //Function to enter details
    void details(){
        cout << "enter the name: " << endl;
        cin >> name;
        cout << "enetr the room number: " << endl;
        cin >> room_number;
        cout << "enter the number of days of stay: "<< endl;
        cin >> number_of_days;
    }
    // Function to calculate total details
    void totalcost(){
        cout << "enter the rent per day: " << endl;
        cin >> cost_per_day;
        cost = number_of_days * cost_per_day;
    }
    // Function to display the details
    void display(){
        cout << "name : "<< name << endl;
        cout << "room number : " << room_number<< endl;
        cout << "cost : "<< cost << endl;
    }
};
int main(){
    hotel a;
    a.details();
    a.totalcost();
    a.display();
    return 0;
}