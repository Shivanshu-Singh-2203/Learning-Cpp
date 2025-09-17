/* Complete Single Inheritence */ 

#include <iostream>
using namespace std;

/* Base Class */
class Vehicle {
protected:
    int speed;
public:
    void setSpeed(int s) {
        speed = s;
    }
    void showSpeed() {
        cout << "Speed: " << speed << " km/h" << endl;
    }
};

/* Public inheritance */ 
class Car : public Vehicle {
public:
    void honk() {
        cout << "Car honks: Beep Beep!" << endl;
    }
};

/* Protected inheritance */
class Bike : protected Vehicle {
public:
    void setBikeSpeed(int s) {
        setSpeed(s);  // Accessible inside derived class
    }
    void showBikeSpeed() {
        showSpeed();
    }
};

/* Private inheritance */
class Truck : private Vehicle {
public:
    void setTruckSpeed(int s) {
        setSpeed(s);  // Accessible inside derived class
    }
    void showTruckSpeed() {
        showSpeed();
    }
};

int main() {
    // --- Public Inheritance ---
    Car myCar;
    myCar.setSpeed(120);   // Public member accessible
    myCar.showSpeed();     // Public member accessible
    myCar.honk();
    cout << "-----------------------" << endl;

    // --- Protected Inheritance ---
    Bike myBike;
    // myBike.setSpeed(80); // ERROR: setSpeed is protected
    myBike.setBikeSpeed(80);   // Access via derived class function
    myBike.showBikeSpeed();
    cout << "-----------------------" << endl;

    // --- Private Inheritance ---
    Truck myTruck;
    // myTruck.setSpeed(90);  // ERROR: setSpeed is private
    myTruck.setTruckSpeed(90);  // Access via derived class function
    myTruck.showTruckSpeed();

    return 0;
}

