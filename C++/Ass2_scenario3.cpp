#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    int wheels = 4;
    
    void genericCarAction() {
        cout << "This car drives on " << wheels << " wheels." << endl;
    }
};

class Nissan : public Car {
public:
    void nissanSpecialFeature() {
        cout << "Brand: Nissan -> Has a special GTR engine sound: Vroom!" << endl;
    }
};

class Mazda : public Car {
public:
    void mazdaSpecialFeature() {
        cout << "Brand: Mazda -> Has a unique rotary engine." << endl;
    }
};

int main() {
    Nissan myNissanCar;
    Mazda myMazdaCar;

    cout << "--- Testing Nissan ---" << endl;
    myNissanCar.genericCarAction();   
    myNissanCar.nissanSpecialFeature(); 

    cout << "\n--- Testing Mazda ---" << endl;
    myMazdaCar.genericCarAction();   
    myMazdaCar.mazdaSpecialFeature();   

    return 0;
}
