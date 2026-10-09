#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;
    double price;

public:
    Book(string t, double p) {
        title = t;
        price = p;
    }

    bool operator<(const Book& b) const {
        if (price == b.price)
            return title < b.title;

        return price < b.price;
    }

    void display() const {
        cout << title << " - Rs. " << price;
    }
};

int main() {
    Book b1("Harry Potter", 450);
    Book b2("The Hobbit", 450);

    cout << "Book 1: ";
    b1.display();

    cout << "\nBook 2: ";
    b2.display();

    if (b1 < b2)
        cout << "\nBook 1 is smaller.";
    else
        cout << "\nBook 2 is smaller or equal.";

    cout << endl;
    return 0;
}