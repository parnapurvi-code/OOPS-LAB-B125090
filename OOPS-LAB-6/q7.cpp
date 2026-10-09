#include <iostream>
#include <stdexcept>
using namespace std;

class InventoryItem {
    int productID, quantity;
    double unitPrice;

public:
    InventoryItem(int id, double price, int qty) {
        productID = id;
        unitPrice = price;
        quantity = qty;
    }

    InventoryItem operator+(const InventoryItem& item) const {
        if (productID != item.productID ||
            unitPrice != item.unitPrice) {
            throw invalid_argument("Incompatible inventory items");
        }

        return InventoryItem(productID, unitPrice,
                             quantity + item.quantity);
    }

    void display() const {
        cout << "Product ID: " << productID
             << ", Unit Price: Rs. " << unitPrice
             << ", Quantity: " << quantity << endl;
    }
};

int main() {
    InventoryItem i1(101, 50, 10);
    InventoryItem i2(101, 50, 15);

    cout << "First item:\n";
    i1.display();

    cout << "Second item:\n";
    i2.display();

    try {
        InventoryItem result = i1 + i2;

        cout << "Combined inventory:\n";
        result.display();
    }
    catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }

    cout << "Original first item after addition:\n";
    i1.display();

    return 0;
}