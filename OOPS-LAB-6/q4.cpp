#include <iostream>
using namespace std;

class AccountBalance {
    double balance;

public:
    AccountBalance(double b) {
        balance = b;
    }

    AccountBalance operator-() const {
        return AccountBalance(-balance);
    }

    void display() const {
        cout << "Balance: Rs. " << balance;
    }
};

int main() {
    AccountBalance a1(5000);

    AccountBalance a2 = -a1;

    cout << "Original account: ";
    a1.display();

    cout << "\nAdjusted account: ";
    a2.display();

    cout << "\nOriginal after operation: ";
    a1.display();

    cout << endl;
    return 0;
}