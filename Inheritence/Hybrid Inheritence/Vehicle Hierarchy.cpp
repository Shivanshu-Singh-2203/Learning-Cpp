/* Vehicle Class */ 

#include <iostream>
#include <locale>
using namespace std;

class Vehicle 
{
private:
	string brand;
	int year;

public:
	Vehicle(string str, int n){
		brand = str;
		year = n;
	}

	void showVehicle() {
		cout << "Brand : " << brand << endl;
		cout << "Year : " << year << endl;
	}
};

class LandVehicle: virtual public Vehicle 
{
private:
	int numWheels;

public: 
	LandVehicle(string str, int n, int wheels) : Vehicle(str, n){
	numWheels = wheels;
	}

	void showLandVehicle() {
		showVehicle();
		cout << "Number of wheels : " << numWheels << endl;
	}

	int getNumWheels() {
		return numWheels;
	}
};

class WaterVehicle: virtual public Vehicle 
{
private: 
	int displacement;

public:
	WaterVehicle(string str, int n, int displace) : Vehicle(str, n) 
	{
		displacement = displace;
	}

	void showWaterVehicle() {
		showVehicle();
		cout << "Displacement : " << displacement << endl;
	}

	int getDisplacement() {
		return displacement;
	}
};


class AmphibiousVehicle : public LandVehicle, public WaterVehicle
{
public:
    AmphibiousVehicle(string str, int n, int wheels, int displace)
        : Vehicle(str, n), LandVehicle(str, n, wheels), WaterVehicle(str, n, displace) {}

    void showAmphibiousVehicle() {
        showVehicle();
        cout << "Number of wheels : " << getNumWheels() << endl;
        cout << "Displacement : " << getDisplacement() << endl;
    }
};

int main() {
    AmphibiousVehicle amph("AmphiBrand", 2025, 4, 2000);

    cout << "Amphibious Vehicle Details:" << endl;
    amph.showAmphibiousVehicle();

    return 0;
}
