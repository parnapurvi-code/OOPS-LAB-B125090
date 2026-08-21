#include <iostream>
using namespace std;
class meter{
    string meternumber;
    string consumername;
    float unitsconsumed;
    public:
    meter(string number, string name, float units){
        meternumber = number;
        consumername = name;
        unitsconsumed = units;
    }
    friend void checkusage(meter m);
};
void checkusage(meter m){
    cout << m.meternumber << endl << m.consumername << endl << m.unitsconsumed << endl;
    if (m.unitsconsumed < 100){
        cout << "low usage" << endl;
    }
    else if (m.unitsconsumed <= 300){
        cout << "moderate usage" << endl;
    }
    else{
        cout << "high usage" << endl;
    }
}
int main(){
    meter m("MTR101", "Purvi", 250);
    checkusage(m);
    return 0;
}