#include <iostream>
using namespace std;

class Inventory {
    int playerID;
    int items;
    int* quantities;

public:
    Inventory(int id, int n) {
        playerID = id;
        items = n;
        quantities = new int[items];
        for(int i=0; i<items; i++) {
            quantities[i] = 0;
        }
    }

    ~Inventory() {
        delete[] quantities;
    }

    friend class GameController;
};

class GameController {
public:
    void modifyItem(Inventory &inv, int pos, int val) {
        if(pos >= 0 && pos < inv.items) {
            inv.quantities[pos] = val;
        }
    }

    void inspect(Inventory &inv) {
        cout << "Player " << inv.playerID << " Inventory: ";
        for(int i=0; i<inv.items; i++) {
            cout << inv.quantities[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Inventory inv(1, 3);
    GameController gc;
    gc.modifyItem(inv, 0, 5);
    gc.modifyItem(inv, 1, 10);
    gc.inspect(inv);
    return 0;
}
