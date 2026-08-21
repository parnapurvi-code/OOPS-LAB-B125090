#include <iostream>
using namespace std;
class UserAccount{
    string username;
    int loginAttempts;
    string accountStatus;
    public:
    UserAccount(string user, int attempts){
        username = user;
        loginAttempts = attempts;
        accountStatus = "Active";
    }
    friend void checkAccount(UserAccount u);
};
void checkAccount(UserAccount u){
    if (u.loginAttempts >= 3){
        u.accountStatus = "Locked";
    }
    else {
        u.accountStatus = "Active";
    }
    cout << u.username << endl;
    cout << u.loginAttempts << endl;
    cout << u.accountStatus << endl;
}
int main(){
    UserAccount user("Purvi", 2);
    checkAccount(user);
    return 0;
}