#include <iostream>
using namespace std;

class Temperature
{
private:
    float celsius, fahrenheit;

public:
    // Function to accept temperature in Celsius
    void input()
    {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
    }

    // Function to convert Celsius to Fahrenheit
    void convert()
    {
        fahrenheit = (9.0 / 5.0) * celsius + 32;
    }

    // Function to display both temperatures
    void display()
    {
        cout << "\nTemperature in Celsius   : " << celsius << " °C" << endl;
        cout << "Temperature in Fahrenheit: " << fahrenheit << " °F" << endl;
    }
};

int main()
{
    Temperature t;

    t.input();
    t.convert();
    t.display();

    return 0;
}