#include <iostream>
#include <string>
using namespace std;
class Car{
    string car_number;
    string brand_name;
    int model_year;
    public:
    //Function to take input of car details
    void car_details(){
        cout << "enter car number: ";
        cin >> car_number;
        cout <<"enter brand name: ";
        cin >> brand_name;
        cout << "enter model year: ";
        cin >> model_year;
    }
    //Function to display car details
    void display_details(){
        cout << "car number : "<< car_number << endl;
        cout << "brand name : "<< brand_name << endl;
        cout << "model year : "<< model_year << endl;
    }
};
int main(){
    Car c;
    c.car_details();
    c.display_details();
    return 0;
}