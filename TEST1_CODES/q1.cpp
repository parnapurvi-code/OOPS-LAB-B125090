#include <iostream>
using namespace std;

class ParkingFloor {
    int floorNo;
    int slots;
    bool* occupancy;

public:
    
    ParkingFloor(int f, int s) {
        floorNo = f;
        slots = s;
        occupancy = new bool[slots];  
        for(int i=0; i<slots; i++) {
            occupancy[i] = false;  
        }
    }

    
    ~ParkingFloor() {
        delete[] occupancy;           
    }

    
    void reserveSingle(int slot) {
        if(slot >= 0 && slot < slots && occupancy[slot] == false) {
            occupancy[slot] = true;
            cout << "Slot " << slot << " reserved on floor " << floorNo << endl;
        } else {
            cout << "Reservation failed.\n";
        }
    }

    
    void reserveMultiple(int start, int count) {
        if(start >= 0 && (start + count) <= slots) {
            for(int i=0; i<count; i++) {
                occupancy[start+i] = true;
            }
            cout << count << " slots reserved starting at " << start 
                 << " on floor " << floorNo << endl;
        } else {
            cout << "Reservation failed.\n";
        }
    }

    
    void display() {
        cout << "Floor " << floorNo << ": ";
        for(int i=0; i<slots; i++) {
            if(occupancy[i]) cout << "[X]";   
            else cout << "[ ]";              
        }
        cout << endl;
    }
};

int main() {
    int floors;
    cout << "Enter number of floors: ";
    cin >> floors;

    ParkingFloor* building[10]; 

    for(int i=0; i<floors; i++) {
        int s;
        cout << "Enter slots for floor " << i << ": ";
        cin >> s;
        building[i] = new ParkingFloor(i, s);
    }

    
    building[0]->reserveSingle(2);
    building[0]->reserveMultiple(0, 3);
    building[0]->display();


    for(int i=0; i<floors; i++) {
        delete building[i];
    }

    return 0;
}
