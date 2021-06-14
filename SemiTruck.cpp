#include <iostream>

#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& name) : Vehicle(name) {}
SemiTruck::~SemiTruck() = default;
SemiTruck::SemiTruck(const SemiTruck&) = default;
SemiTruck& SemiTruck::operator=(const SemiTruck&) = default;

void SemiTruck::flashLights()
{
    setSpeed(40);
    std::cout << name << ": Flashing lights!" << std::endl;
}

void SemiTruck::pullOver()
{
    setSpeed(0);
    std::cout << name << ": License?, sure!" << std::endl;
}
