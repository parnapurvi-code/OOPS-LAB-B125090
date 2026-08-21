#include <iostream>
using namespace std;

class Printer
{
private:
    string printerName;
    int pagesPrinted;
    int inkLevel;
    bool powerStatus;

public:
    Printer(string name, int pages, int ink, bool power)
    {
        printerName = name;
        pagesPrinted = pages;
        inkLevel = ink;
        powerStatus = power;
    }

    friend class PrinterManager;
};

class PrinterManager
{
public:

    void displayPrinterInfo(Printer &p)
    {
        cout << p.printerName << endl;
        cout << p.pagesPrinted << endl;
        cout << p.inkLevel << "%" << endl;

        if (p.powerStatus)
            cout << "Power Status: ON" << endl;
        else
            cout << "Power Status: OFF" << endl;
    }

    void turnOn(Printer &p)
    {
        p.powerStatus = true;
        cout << "Printer turned ON." << endl;
    }

    void turnOff(Printer &p)
    {
        p.powerStatus = false;
        cout << "Printer turned OFF." << endl;
    }

    void checkInkLevel(Printer &p)
    {
        cout << "Ink Level: " << p.inkLevel << "%" << endl;

        if (p.inkLevel < 20)
            cout << "Warning: Low ink level!" << endl;
        else
            cout << "Ink level is sufficient." << endl;
    }

    void resetPageCount(Printer &p)
    {
        p.pagesPrinted = 0;
        cout << "Page count reset successfully." << endl;
    }
};

int main()
{
    Printer p("HP LaserJet", 500, 75, false);

    PrinterManager manager;

    manager.displayPrinterInfo(p);

    manager.turnOn(p);

    manager.checkInkLevel(p);

    manager.resetPageCount(p);

    manager.turnOff(p);

    cout << "\nFinal Printer Information:" << endl;
    manager.displayPrinterInfo(p);

    return 0;
}