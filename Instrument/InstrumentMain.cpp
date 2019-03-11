#include <iostream>
#include <string>
#include "Odometer.h"
#include "FuelGauge.h"

using namespace std;

int main() {
	cout << "Congratulations on the purchase of your New Car" << endl;
	cout << "It has come with 24 miles and a full tank of Gas (14 gallons)" << endl;
	Odometer myCar(24);
	FuelGauge carTank(14);

	cout << "You are driving 48 Miles to Norman, OK";
	for (int x = 0; x < 48; x++) {
		myCar.addMile(carTank);
		}
	cout << "Stopped at Gas Station\n";
	cout << "Your current Fuel Level is:" << carTank.getFuelLevel() << endl;
	while (carTank.getFuelLevel() < 15) {
		carTank.addFuel();
		cout << "Your current Fuel Level is:" << carTank.getFuelLevel() << endl;
	}
	cout << "Your current Fuel Level is:" << carTank.getFuelLevel() << endl;
	cout << "Your Current Mileage is:" << myCar.getMileage() << "Miles\n";

	
	
	return 0;
}
