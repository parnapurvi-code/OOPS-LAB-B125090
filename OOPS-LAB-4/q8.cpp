#include <iostream>
using namespace std;

class VehicleService {
private:
    string vehicleNumber;
    string ownerName;
    string serviceDueStatus;
    int lastServiceKilometres;

public:
    VehicleService(string number, string owner,
                   string status, int kilometres) {
        vehicleNumber = number;
        ownerName = owner;
        serviceDueStatus = status;
        lastServiceKilometres = kilometres;
    }

    friend class ServiceManager;
};

class ServiceManager {
public:

    void displayInfo(VehicleService &v) {
        cout << "----- Vehicle Service Information -----" << endl;
        cout << "Vehicle Number: " << v.vehicleNumber << endl;
        cout << "Owner Name: " << v.ownerName << endl;
        cout << "Service Due Status: "
             << v.serviceDueStatus << endl;
        cout << "Last Service Kilometres: "
             << v.lastServiceKilometres << " km" << endl;
    }

    void markServiceCompleted(VehicleService &v) {
        v.serviceDueStatus = "Completed";
        cout << "Service marked as completed." << endl;
    }

    void updateLastServiceKilometres(VehicleService &v, int km) {
        v.lastServiceKilometres = km;
        cout << "Last service kilometres updated." << endl;
    }

    void checkServicing(VehicleService &v) {
        if (v.serviceDueStatus == "Due" ||
            v.lastServiceKilometres >= 10000) {
            cout << "Vehicle requires servicing." << endl;
        }
        else {
            cout << "Vehicle does not require servicing." << endl;
        }
    }
};

int main() {
    VehicleService vehicle(
        "OD02AB1234",
        "Purvi",
        "Due",
        8500
    );

    ServiceManager manager;

    manager.displayInfo(vehicle);

    manager.checkServicing(vehicle);

    manager.markServiceCompleted(vehicle);

    manager.updateLastServiceKilometres(vehicle, 9500);

    manager.checkServicing(vehicle);

    manager.displayInfo(vehicle);

    return 0;
}