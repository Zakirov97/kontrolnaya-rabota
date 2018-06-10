#pragma once
#include "Vehicle.h"
#include <vector>
#include <memory>
#include <fstream>

#include "Bike.h"
#include "Boat.h"
#include "Bus.h"
#include "car.h"
#include "Helicopter.h"
#include "Plane.h"
#include "Scooter.h"
class SalerComp
{
	std::string name;
	std::vector<std::auto_ptr<Vehicle>> veh;
public:
	void setName(std::string name);
	std::string getName() const { return name; }
	void addVehicle(Vehicle* vehc);
	void getInfo() const;
	SalerComp(std::string name);
	void saveToFile()const;
	void readFromFile();
};
