#include <iostream>
using namespace std;

class Bill {
    int items;
    double amount;

public:
    Bill(int i = 0, double a = 0) {
        items = i;
        amount = a;
    }

    Bill operator+(const Bill& b) const {
        return Bill(items + b.items,
                    amount + b.amount);
    }

    bool operator>(const Bill& b) const {
        return amount > b.amount;
    }

    void display() const {
        cout << "Number of items: " << items
             << "\nTotal amount: Rs. " << amount
             << endl;
    }
};

int main() {
    Bill b1(3, 1500);
    Bill b2(5, 2500);

    cout << "First bill:\n";
    b1.display();

    cout << "\nSecond bill:\n";
    b2.display();

    Bill combined = b1 + b2;

    cout << "\nCombined bill:\n";
    combined.display();

    cout << "\nIs first bill greater than second bill? "
         << (b1 > b2);

    cout << endl;
    return 0;
}