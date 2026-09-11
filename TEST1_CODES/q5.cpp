#include <iostream>
using namespace std;

class Trip {
    int id;
    int distance;
    int baseFare;
    double finalFare;

public:
    Trip(int i, int d, int f) {
        id = i;
        distance = d;
        baseFare = f;
        finalFare = 0;
    }

    void fare() {
        finalFare = baseFare + distance * 10;
    }

    void fare(int wait) {
        finalFare = baseFare + distance * 10 + wait * 2;
    }

    void fare(int wait, int disc) {
        finalFare = (baseFare + distance * 10 + wait * 2) - disc;
    }

    friend void compare(Trip &t1, Trip &t2);
};

void compare(Trip &t1, Trip &t2) {
    if(t1.finalFare < t2.finalFare) cout << "Trip1 cheaper\n";
    else cout << "Trip2 cheaper\n";
}

int main() {
    Trip t1(1, 10, 50);
    Trip t2(2, 15, 60);
    t1.fare(5, 10);
    t2.fare(3);
    compare(t1, t2);
    return 0;
}
