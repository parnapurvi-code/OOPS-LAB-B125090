#include <iostream>
using namespace std;
class Square{
    int a;
    float area;
    float perimeter;
    public:
    void side(){
        cout << "enter the length of the side of square : ";
        cin >> a;
    }
    //Function to calculate area
    void Area(){
        area = a*a;
    }
    //Function to calculate perimeter
    void Perimeter(){
        perimeter = 4*a;
    }
    //Function to display area and perimeter
    void display(){
        cout << "area : " << area << endl;
        cout << "perimeter : " << perimeter;
    }
};
int main(){
    Square s;
    s.side();
    s.Area();
    s.Perimeter();
    s.display();
    return 0;
}