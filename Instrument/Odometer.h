#pragma once
#include<iostream>
#include<string>
#include "FuelGauge.h"

using namespace std;

class Odometer
{
private:
	int odometerReading;
public:
	Odometer();
	Odometer(int milesOnCar);
	int getMileage();
	void addMile(FuelGauge tankInfo);
};

