#include <iostream>
#include <string>
using namespace std;

class Time{
    int hours;
    int minutes;
    public:
    // Function to take input of time
    void input(){
        cout << "enter hours : " << endl;
        cin >> hours;
        cout << "enter minutes : " << endl;
        cin >> minutes;
    }
    // Function to add time
    void add(Time t1, Time t2){
        minutes = t1.minutes + t2.minutes;
        hours = t1.hours + t2.hours;
        if (minutes >= 60){
            hours += minutes/60;
            minutes = minutes % 60;
        }
    }
    // Function to display the resulting time
    void display(){
        cout << "resulting time = " << hours << " hours " << minutes << " minutes" << endl;
    }
};
int main (){
    Time t1, t2, result;
    cout << "enter first time: " << endl;
    t1.input();
    cout << "enter second time: " << endl;
    t2.input();
    result.add(t1,t2);
    result.display();
    return 0;


}
