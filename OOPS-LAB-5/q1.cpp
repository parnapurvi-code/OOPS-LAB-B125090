#include <iostream>
using namespace std;
int convert(int km){
    return km*1000;
}
int convert(long m){
    return m*100;
}
float convert(float km){
    return km*1000;
}
int main(){
    int km, m;
    float fkm;
    cout << "enter distance in kilometers: ";
    cin >> km;
    cout << "enter distance in meters: ";
    cin >> m;
    cout << "enter distance in kilometers: ";
    cin >> fkm;
    cout << "\n" << fkm << "km = " << convert(fkm) << "meters";
    return 0;
}