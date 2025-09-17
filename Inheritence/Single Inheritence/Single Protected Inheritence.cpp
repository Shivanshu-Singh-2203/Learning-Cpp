/* Demonstrating protected inheritence */ 

#include <iostream>
using namespace std;

/* Base class */
class Vehicle {
protected:
	int speed;

public: 
	void setspeed(int s) {
		speed = s;
	}

	void showspeed() {
		cout << "Speed : " << speed << " km/h" << endl;
	}
};

/* Derived class with protected inheritence */ 
class Bike : protected Vehicle {
public: 
	void setBikeSpeed(int s) {
		setspeed(s);
	}

	void showBikeSpeed() {
		showspeed();
	}
};

int main()
{
	Bike myBike;
	/* myBike.setSpeed(80); // ERROR: setSpeed is protected now */
	myBike.setBikeSpeed(80);
	myBike.showBikeSpeed();
	return 0;
}
