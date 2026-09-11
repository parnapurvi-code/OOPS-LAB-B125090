#include <iostream>
using namespace std;

class Borrower {
    int id;
    int overdueDays;
    double fine;

public:
    Borrower(int i, int d) {
        id = i;
        overdueDays = d;
        fine = 0;
    }

    void calculateFine() {
        fine = overdueDays * 2.0;
    }

    void calculateFine(double rate) {
        fine = overdueDays * rate;
    }

    friend void compare(Borrower &b1, Borrower &b2);
};

void compare(Borrower &b1, Borrower &b2) {
    if(b1.fine > b2.fine) cout << "Borrower " << b1.id << " has higher fine.\n";
    else cout << "Borrower " << b2.id << " has higher fine.\n";
}

int main() {
    Borrower b1(101, 5);
    Borrower b2(102, 7);
    b1.calculateFine();
    b2.calculateFine(3.0);
    compare(b1, b2);
    return 0;
}
