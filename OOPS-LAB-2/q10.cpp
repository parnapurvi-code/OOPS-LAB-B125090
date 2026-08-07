#include<iostream>
using namespace std;

// Class to calculate and display a water bill.
class waterbill{
    char consumer_number[50];   // Stores the consumer ID.
    char consumer_name[50];     // Stores the consumer name.
    int litres;                 // Amount of water used in litres.
    int bill;                   // Calculated bill amount.
    public:
    void details(){
        // Read customer details and water consumption from the user.
        cout << "enter consumer number: ";
        cin >> consumer_number;
        cout << "enter consumer name: ";
        cin >> consumer_name;
        cout << "enter amount of water consumption in ltres: ";
        cin >> litres;
    }
    void Bill(){
        // Calculate the bill based on slab rates.
        if (500 >= litres){
            // First slab: up to 500 litres at Rs. 2 per litre.
            bill = litres * 2;
        }
        else if (1000 >= litres){
            // Second slab: first 500 litres at Rs. 2, next litres at Rs. 3.
            bill = 500 * 2 + (litres - 500) * 3;
        }
        else{
            // Third slab: first 500 litres at Rs. 2, next 500 litres at Rs. 3, remaining at Rs. 5.
            bill = 500 * 2 + 500 * 3 + (litres - 1000) * 5;
        }
    }
    void  display(){
        // Output the consumer details and bill breakdown.
        cout << "consumer name: "<< consumer_name << endl;
        cout << "consumer ID: "<< consumer_number << endl;
        if (500 >= litres){
            cout << "bill: " << litres << " * 2 = "<< bill;
        }
        else if (1000 >= litres){
            cout << "bill: " << "500 * 2 + " << litres-500 << " * 3 = "<< bill;
        }
        else{
            cout << "bill: " << "500 *2 + 500 * 3 + " << litres - 1000 << " * 5 = " << bill;
        }

    }
};
int main(){
    waterbill a;
    a.details();
    a.Bill();
    a.display();
    return 0;
}