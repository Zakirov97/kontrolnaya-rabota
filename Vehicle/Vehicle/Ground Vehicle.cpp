#include "Ground Vehicle.h"




Ground_Vehicle::Ground_Vehicle(std::string color, std::string model, int max_speed, int number_of_seats, int engine_power) :Vehicle(color, model, max_speed, number_of_seats)
{
	this->engine_power = engine_power;
}

void Ground_Vehicle::setEnginePower(int engine_power)
{
	this->engine_power = engine_power;
}

void Ground_Vehicle::info() const
{
	Vehicle::info();
	std::cout << "Engine Power: " << engine_power << std::endl;
}