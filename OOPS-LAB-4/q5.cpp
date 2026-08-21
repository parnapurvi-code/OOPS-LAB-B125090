#include <iostream>
using namespace std;
class eventparticipant{
    string participantname;
    int age;
    string registrationstatus;
    public:
    eventparticipant(string name, int a, string status){
        participantname = name;
        age = a;
        registrationstatus = status;
    }
    friend void verifyparticipant(eventparticipant p);
};
void verifyparticipant(eventparticipant p){
    cout << p.participantname << endl << p.age << endl << p.registrationstatus << endl;
    if(p.age >=18 && p.registrationstatus == "Active"){
        cout << "eligible" << endl;
    }
    else{
        cout << "not eligible" << endl;
    }
}
int main(){
    eventparticipant p("safiya", 20, "active");
    verifyparticipant(p);
    return 0;
}