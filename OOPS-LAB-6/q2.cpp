#include <iostream>
using namespace std;

class Duration {
    int h, m;
public:
    Duration(int hh=0, int mm=0) { h=hh; m=mm; }
    Duration operator+(Duration d) {
        int totalM = m + d.m;
        int totalH = h + d.h + totalM/60;
        totalM = totalM % 60;
        return Duration(totalH, totalM);
    }
    void show() { cout << h << "h " << m << "m" << endl; }
};

int main() {
    Duration d1(1,50), d2(2,30);
    Duration d3 = d1 + d2;
    d1.show(); d2.show(); d3.show();
    return 0;
}
