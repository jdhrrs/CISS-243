#include "CargoShip.h"
#include <iostream>
#include<string>

using namespace std;

// define the constructor for the CargoShip class with three parameters
CargoShip::CargoShip(const std::string& name, int yearBuilt, int cargoCapacity)
    : Ship(name, yearBuilt), cargoCapacity_{ cargoCapacity }
{}

// define the accessor function for the cargoCapacity data member
int CargoShip::getCargoCapacity() const {
    return cargoCapacity_;
}

// define the mutator function for the cargoCapacity data member
void CargoShip::setCargoCapacity(int cargoCapacity) {
    cargoCapacity_ = cargoCapacity;
}

// define the print function that overrides the ship class's print function
void CargoShip::print() const {
    std::cout << "Ship Name: " << getName() << std::endl;
    std::cout << "Cargo Capacity: " << cargoCapacity_ << std::endl;
}