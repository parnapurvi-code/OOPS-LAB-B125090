#include <iostream>
#include <string>
using namespace std;

class MovieTicket
{
private:
    string movieName;
    float ticketPrice;
    int numberOfTickets;
    float totalCost;

public:
    // Function to accept booking details
    void input()
    {
        cout << "Enter Movie Name: ";
        cin.ignore();
        getline(cin, movieName);

        cout << "Enter Ticket Price: ";
        cin >> ticketPrice;

        cout << "Enter Number of Tickets: ";
        cin >> numberOfTickets;
    }

    // Function to calculate total cost
    void calculate()
    {
        totalCost = ticketPrice * numberOfTickets;
    }

    // Function to display booking summary
    void display()
    {
        cout << "\n----- Booking Summary -----" << endl;
        cout << "Movie Name       : " << movieName << endl;
        cout << "Ticket Price     : Rs. " << ticketPrice << endl;
        cout << "Number of Tickets: " << numberOfTickets << endl;
        cout << "Total Cost       : Rs. " << totalCost << endl;
    }
};

int main()
{
    MovieTicket m;

    m.input();
    m.calculate();
    m.display();

    return 0;
}