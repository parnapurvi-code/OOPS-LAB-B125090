#include <iostream>
using namespace std;

class Hostelfee
{
    char name[20];
    int id;
    float fee;
    int num;
    float amount;
    char delayed;

public:
//Function to enter details
    void details()
    {
        cout << "ENTER DETAILS" << endl;
        cout << "Enter student name:" << endl;
        cin >> name;
        cout << "Enter id:" << endl;
        cin >> id;
        cout << "Enter monthly fee:" << endl;
        cin >> fee;
        cout << "Enter number of months: " << endl;
        cin >> num;
        cout << "Is payment delayed??(Y/N):" << endl;
        cin >> delayed;
    }

    int cal()
    {
        amount = fee * num;
        if (delayed == 'Y' || delayed == 'y')
        {
            amount += 500;
        }
        return amount;
    }
    //Function to display
    void display()
    {
        cout << "Enter the total amount " << cal() << endl;
    }
};

int main()
{
    Hostelfee H;
    H.details();
    H.display();
    return 0;
}