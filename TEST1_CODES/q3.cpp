#include <iostream>
using namespace std;

class SensorGrid {
    int n;
    double* readings;

public:
    SensorGrid(int size) {
        n = size;
        readings = new double[n];
    }

    ~SensorGrid() {
        delete[] readings;
    }

    void enter() {
        for(int i=0; i<n; i++) {
            cout << "Reading " << i << ": ";
            cin >> readings[i];
        }
    }

    void display() {
        for(int i=0; i<n; i++) {
            cout << readings[i] << " ";
        }
        cout << endl;
    }

    void replace(int pos, double val) {
        if(pos >= 0 && pos < n) {
            readings[pos] = val;
        }
    }

    friend void compare(SensorGrid &g1, SensorGrid &g2);
};

void compare(SensorGrid &g1, SensorGrid &g2) {
    double sum1 = 0, sum2 = 0;
    for(int i=0; i<g1.n; i++) sum1 += g1.readings[i];
    for(int i=0; i<g2.n; i++) sum2 += g2.readings[i];
    double avg1 = sum1 / g1.n;
    double avg2 = sum2 / g2.n;
    if(avg1 > avg2) cout << "Grid1 hotter\n";
    else cout << "Grid2 hotter\n";
}

int main() {
    SensorGrid g1(3), g2(4);
    g1.enter();
    g2.enter();
    g1.display();
    g2.display();
    compare(g1, g2);
    return 0;
}
