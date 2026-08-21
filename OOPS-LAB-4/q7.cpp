#include <iostream>
using namespace std;

class Exhibit
{
private:
    string exhibitName;
    int exhibitID;
    int visitorCount;
    bool displayStatus;

public:
    Exhibit(string name, int id, int visitors, bool status)
    {
        exhibitName = name;
        exhibitID = id;
        visitorCount = visitors;
        displayStatus = status;
    }

    friend class MuseumManager;
};

class MuseumManager
{
public:

    void displayExhibitInfo(Exhibit &e)
    {
        cout << "\nExhibit Name: " << e.exhibitName << endl;
        cout << "Exhibit ID: " << e.exhibitID << endl;
        cout << "Visitor Count: " << e.visitorCount << endl;

        if (e.displayStatus)
            cout << "Display Status: Open" << endl;
        else
            cout << "Display Status: Closed" << endl;
    }

    void addVisitors(Exhibit &e, int visitors)
    {
        e.visitorCount += visitors;
        cout << visitors << " visitors added." << endl;
    }

    void resetVisitorCount(Exhibit &e)
    {
        e.visitorCount = 0;
        cout << "Visitor count reset successfully." << endl;
    }

    void openExhibit(Exhibit &e)
    {
        e.displayStatus = true;
        cout << "Exhibit opened." << endl;
    }

    void closeExhibit(Exhibit &e)
    {
        e.displayStatus = false;
        cout << "Exhibit closed." << endl;
    }

    void displayStatus(Exhibit &e)
    {
        if (e.displayStatus)
            cout << "The exhibit is currently OPEN." << endl;
        else
            cout << "The exhibit is currently CLOSED." << endl;
    }
};

int main()
{
    Exhibit e("Ancient Artifacts", 101, 50, false);

    MuseumManager manager;

    manager.displayExhibitInfo(e);

    manager.openExhibit(e);

    manager.addVisitors(e, 25);

    manager.displayStatus(e);

    manager.displayExhibitInfo(e);

    manager.resetVisitorCount(e);

    manager.closeExhibit(e);

    return 0;
}