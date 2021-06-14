#include <iostream>

#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& name) : Vehicle(name) {}
SemiTruck::~SemiTruck() = default;
SemiTruck::SemiTruck(const SemiTruck&) = default;
SemiTruck& SemiTruck::operator=(const SemiTruck&) = default;

void SemiTruck::flashLights()
{
    setSpeed(60);
    std::cout << name << ": Flashing lights!" << std::endl;
}
