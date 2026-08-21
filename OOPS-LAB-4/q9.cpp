#include <iostream>
using namespace std;

class DigitalWallet
{
private:
    string userName;
    double walletBalance;
    bool walletStatus;

public:
    DigitalWallet(string name, double balance, bool status)
    {
        userName = name;
        walletBalance = balance;
        walletStatus = status;
    }

    friend class WalletManager;
};

class WalletManager
{
public:

    void displayWalletDetails(DigitalWallet &w)
    {
        cout << "\nUser Name: " << w.userName << endl;
        cout << "Wallet Balance: Rs. " << w.walletBalance << endl;

        if (w.walletStatus)
            cout << "Wallet Status: Active" << endl;
        else
            cout << "Wallet Status: Disabled" << endl;
    }

    void addMoney(DigitalWallet &w, double amount)
    {
        if (!w.walletStatus)
        {
            cout << "Wallet is disabled. Cannot add money." << endl;
            return;
        }

        w.walletBalance += amount;

        cout << "Rs. " << amount << " added successfully." << endl;
    }

    void deductMoney(DigitalWallet &w, double amount)
    {
        if (!w.walletStatus)
        {
            cout << "Wallet is disabled." << endl;
            return;
        }

        if (amount <= w.walletBalance)
        {
            w.walletBalance -= amount;
            cout << "Rs. " << amount << " deducted successfully." << endl;
        }
        else
        {
            cout << "Insufficient balance." << endl;
        }
    }

    void disableWallet(DigitalWallet &w)
    {
        w.walletStatus = false;
        cout << "Wallet disabled successfully." << endl;
    }

    void displayWalletStatus(DigitalWallet &w)
    {
        if (w.walletStatus)
            cout << "Wallet Status: Active" << endl;
        else
            cout << "Wallet Status: Disabled" << endl;
    }
};

int main()
{
    DigitalWallet wallet("Safi", 5000, true);

    WalletManager manager;

    manager.displayWalletDetails(wallet);

    manager.addMoney(wallet, 2000);

    manager.deductMoney(wallet, 10000);

    manager.displayWalletDetails(wallet);

    manager.disableWallet(wallet);

    manager.displayWalletStatus(wallet);

    return 0;
}