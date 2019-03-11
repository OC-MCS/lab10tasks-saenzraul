#include "FuelGauge.h"
#include <string>

using namespace std;

//Default Constructer
FuelGauge :: FuelGauge() {
	fuelLevel = 0;
}
//constructor
FuelGauge :: FuelGauge(int fuelInTank) {
	fuelLevel = fuelInTank;
}
//SetsFuel Level Rapidly
void FuelGauge :: setFuelLevel(int fuelInTank) {
	fuelLevel = fuelInTank;
}
//return Fuel Level
int FuelGauge :: getFuelLevel() {
	return fuelLevel;
}
//Adds Single Gallon Of Gas
void FuelGauge :: addFuel() {
	fuelLevel++;
}
//Subtracts Gallon of Gas
void FuelGauge :: burnFuel() {
	fuelLevel--;
}
