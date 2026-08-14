#include <iostream>
#include <string>
using namespace std;

class CricketPlayer
{
private:
    string playerName;
    int matchesPlayed;
    int totalRuns;
    float battingAverage;

public:
    // Function to accept player details
    void input()
    {
        cout << "Enter Player Name: ";
        cin.ignore();
        getline(cin, playerName);

        cout << "Enter Matches Played: ";
        cin >> matchesPlayed;

        cout << "Enter Total Runs Scored: ";
        cin >> totalRuns;
    }

    // Function to calculate batting average
    void calculateAverage()
    {
        battingAverage = (float)totalRuns / matchesPlayed;
    }

    // Function to display player report
    void display()
    {
        cout << "\n----- Player Report -----" << endl;
        cout << "Player Name     : " << playerName << endl;
        cout << "Matches Played  : " << matchesPlayed << endl;
        cout << "Total Runs      : " << totalRuns << endl;
        cout << "Batting Average : " << battingAverage << endl;

        cout << "Performance     : ";
        if (battingAverage >= 50)
            cout << "Excellent";
        else if (battingAverage >= 35)
            cout << "Good";
        else if (battingAverage >= 20)
            cout << "Average";
        else
            cout << "Poor";

        cout << endl;
    }
};

int main()
{
    CricketPlayer p;

    p.input();
    p.calculateAverage();
    p.display();

    return 0;
}