#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    string color;
    string engineSize;
    string transmissionType;

    void showVehicleInfo() {
        cout << "Color: " << color << endl;
        cout << "Engine: " << engineSize << endl;
        cout << "Transmission: " << transmissionType << endl;
    }
};

class Bus : public Vehicle {
public:
    int numberOfPassengers; 

    void showBusInfo() {
        showVehicleInfo(); 
        cout << "Passengers Capacity: " << numberOfPassengers << endl;
    }
};

int main() {
    Bus mySchoolBus;

    mySchoolBus.color = "Yellow";
    mySchoolBus.engineSize = "V8 Heavy Duty";
    mySchoolBus.transmissionType = "Automatic";
    
    mySchoolBus.numberOfPassengers = 50;

    cout << "--- MY BUS DETAILS ---" << endl;
    mySchoolBus.showBusInfo();

    return 0;
}

