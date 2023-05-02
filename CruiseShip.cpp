#include "CruiseShip.h"
#include <string>
#include <iostream>

using namespace std;

// define the constructor for the CruiseShip class with three parameters
CruiseShip::CruiseShip(const std::string& name, int yearBuilt, int maxPassengers)
    : Ship(name, yearBuilt), maxPassengers_{ maxPassengers }
{}

// define the accessor function for the maxPassengers data member
int CruiseShip::getMaxPassengers() const {
    return maxPassengers_;
}

// define the mutator function for the maxPassengers data member
void CruiseShip::setMaxPassengers(int maxPassengers) {
    maxPassengers_ = maxPassengers;
}

// define the print function that overrides the base class's print function
void CruiseShip::print() const {
    cout << "Ship name: " << getName() << endl;
    cout << "Maximum Passangers: " <<  maxPassengers_ << endl;
}