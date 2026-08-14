#include <iostream>
#include <string>
using namespace std;

class MobileRecharge
{
private:
    string mobileNumber;
    string customerName;
    float balance;

public:
    // Function to accept customer details
    void input()
    {
        cout << "Enter Customer Name: ";
        cin.ignore();
        getline(cin, customerName);

        cout << "Enter Mobile Number: ";
        cin >> mobileNumber;

        cout << "Enter Current Balance: ";
        cin >> balance;
    }

    // Function to recharge balance
    void recharge()
    {
        float amount;
        cout << "\nEnter Recharge Amount to Add: ";
        cin >> amount;

        balance += amount;
        cout << "Balance recharged successfully.\n";
    }

    // Function to deduct balance after selecting a plan
    void selectPlan()
    {
        float planAmount;
        cout << "\nEnter Recharge Plan Amount: ";
        cin >> planAmount;

        if (planAmount <= balance)
        {
            balance -= planAmount;
            cout << "Recharge Plan Activated Successfully.\n";
        }
        else
        {
            cout << "Insufficient Balance! Recharge failed.\n";
        }
    }

    // Function to display updated balance
    void display()
    {
        cout << "\n----- Customer Details -----" << endl;
        cout << "Customer Name : " << customerName << endl;
        cout << "Mobile Number : " << mobileNumber << endl;
        cout << "Available Balance : Rs. " << balance << endl;
    }
};

int main()
{
    MobileRecharge m;

    m.input();
    m.recharge();
    m.selectPlan();
    m.display();

    return 0;
}