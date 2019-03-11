#pragma once
#include<string>
#include<iostream>
using namespace std;

class FuelGauge
{
private:
	const int MaxFuel = 15;
	int fuelLevel;
public:
	FuelGauge();
	FuelGauge(int fuelInTank);
	void setFuelLevel(int fuelInTank);
	int getFuelLevel();
	void addFuel();
	void burnFuel();
};

