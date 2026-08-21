#include <iostream>
using namespace std;
class Weather {
    string cityName;
    float temperature;
    string weathercondition;
public:
    Weather(string city, float temp, string condition){
        cityName = city;
        temperature = temp;
        weathercondition = condition;
    }
    friend void generateReport(Weather w);
        
};
void generateReport(Weather w){
    cout << "city " << w.cityName << endl;
    cout << "Temperature " << w.temperature << endl;
    cout << "weather condition " << w.weathercondition << endl;
    if (w.temperature > 35){
        cout << "very hot" << endl;
    }
    else if (w.temperature >= 20 ){
        cout << "pleasant " << endl;
    }
    else{
        cout << "cool" << endl;
    }
    
}
int main (){
    Weather w("Bhubaneswar", 32.5, "sunny");
    generateReport(w);
    return 0;
}