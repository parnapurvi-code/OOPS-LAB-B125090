#include <iostream>
using namespace std;
double area(double side){
    return side*side;
}
double area(double length, double breadth){
    return length*breadth;
}
double area(float radius){
    return 3.14*radius*radius;
}
int main(){
    double side, length, breadth;
    float radius;
    cout << "enter side of square: ";
    cin >> side;
    cout << "enter length and breadth of rectangle: ";
    cin >> length >> breadth;
    cout << "enter radiius of circle: ";
    cin >> radius;
    cout << "\nArea of square = "<< area(side);
    cout << "\nArea of rectangle = "<< area(length, breadth);
    cout << "\nArea of circle = " << area(radius);
    return 0;
}