#include <iostream>
using namespace std;

class Product {
    int id;
    char name[50];
    int price;
    int quantity;

public:
    void input() {
        cout << "Enter the ID: ";
        cin >> id;
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the quantity: ";
        cin >> quantity;
        cout << "Enter the price: ";
        cin >> price;
    }

    void display() {
        cout << "ID: " << id << endl;
        cout << "NAME: " << name << endl;
        cout << "QUANTITY: " << quantity << endl;
        cout << "PRICE: " << price << endl;
        cout << "TOTAL COST: " << price * quantity << endl;
    }

    int totalCost() {
        return price * quantity;
    }
};

int main() {
    int n;
    cout << "Enter number of products: ";
    cin >> n;

    // Dynamically allocate memory for n products
    Product* products = new Product[n];

    // Input details for all products
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Product " << i + 1 << ":\n";
        products[i].input();
    }

    // Display details and calculate inventory value
    int inventoryValue = 0;
    cout << "\n--- Product Details ---\n";
    for (int i = 0; i < n; i++) {
        products[i].display();
        inventoryValue += products[i].totalCost();
        cout << endl;
    }

    cout << "Overall Inventory Value: " << inventoryValue << endl;

    // Properly deallocate memory
    delete[] products;
    products = nullptr;

    return 0;
}
#include <iostream>
using namespace std;

class Product {
    int id;
    char name[50];
    int price;
    int quantity;

public:
    void input() {
        cout << "Enter the ID: ";
        cin >> id;
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the quantity: ";
        cin >> quantity;
        cout << "Enter the price: ";
        cin >> price;
    }

    void display() {
        cout << "ID: " << id << endl;
        cout << "NAME: " << name << endl;
        cout << "QUANTITY: " << quantity << endl;
        cout << "PRICE: " << price << endl;
        cout << "TOTAL COST: " << price * quantity << endl;
    }

    int totalCost() {
        return price * quantity;
    }
};

int main() {
    int n;
    cout << "Enter number of products: ";
    cin >> n;

    // Dynamically allocate memory for n products
    Product* products = new Product[n];

    // Input details for all products
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Product " << i + 1 << ":\n";
        products[i].input();
    }

    // Display details and calculate inventory value
    int inventoryValue = 0;
    cout << "\n--- Product Details ---\n";
    for (int i = 0; i < n; i++) {
        products[i].display();
        inventoryValue += products[i].totalCost();
        cout << endl;
    }

    cout << "Overall Inventory Value: " << inventoryValue << endl;

    // Properly deallocate memory
    delete[] products;
    products = nullptr;

    return 0;
}
