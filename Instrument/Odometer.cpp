#include "Odometer.h" 
#include "FuelGauge.h"
#include<string>
#include<iostream>

using namespace std;

Odometer::Odometer() {
	odometerReading = 0;
}

Odometer::Odometer(int milesOnCar) {
	odometerReading = milesOnCar;
}
//adds Mile Determines whether to burn fuel or not
void Odometer::addMile(FuelGauge tankInfo) {
	odometerReading++;
	if (odometerReading >= 1000000) {
		odometerReading = 0;
	}
	if (odometerReading % 24 == 0) {
		// Burn 1 gallon of gas
		tankInfo.burnFuel();
	}
}
//returns current Mileage
int Odometer::getMileage() {
	return odometerReading;
}

