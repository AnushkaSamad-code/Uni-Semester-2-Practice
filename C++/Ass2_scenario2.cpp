#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    void processColor(string colorName) {
        cout << " Emailing client: The vehicle color is " << colorName << endl;
    }
};

class Car : public Vehicle {
};

class Truck : public Vehicle {
};

class Bus : public Vehicle {
};

int main() {
    Car myCar;
    Truck myTruck;
    Bus myBus;

    cout << "--- Updating Client about Colors ---" << endl;

    myCar.processColor("Red");
    myTruck.processColor("Black");
    myBus.processColor("White");

    return 0;
}
