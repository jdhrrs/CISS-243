#include "Ship.h"
#include <iostream>

using namespace std;

// Define accessor function for the Ship Class with 2 Parameters 
Ship::Ship(const std::string& name, int yearBuilt)
    : name_{ name }, yearBuilt_{ yearBuilt }
{}

// Get the accessor function for the name data member. 
const std::string& Ship::getName() const {
    return name_;
}

// Define the accessor function for the yearBuilt data member
int Ship::getYearBuilt() const {
    return yearBuilt_;
}

// Define mutator function for the name data member 
void Ship::setName(const std::string& name) {
    name_ = name;
}

//Define mutator function fot the yearBuilt data member 
void Ship::setYearBuilt(int yearBuilt) {
    yearBuilt_ = yearBuilt;
}

// Define Virtual Function for Printing Ship name and the year built. 
void Ship::print() const {
    std::cout << "Ship name: " << name_ << std::endl;
    std::cout << "Year built: " << yearBuilt_ << std::endl;
}
