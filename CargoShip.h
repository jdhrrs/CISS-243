#ifndef CARGOSHIP_H
#define CARGOSHIP_H

#include "Ship.h"

using namespace std;

class CargoShip : public Ship {
public:
    // Define Constructor with 3 parameters 
    CargoShip(const std::string& name, int yearBuilt, int cargoCapacity);

    // Accessor function for cargoCapacity data member
    int getCargoCapacity() const;
    // Mutator function for cargoCapacity data member 
    void setCargoCapacity(int cargoCapacity);

    // Overrides base class print function to display only 
    // Ship name and cargo capacity. 
    virtual void print() const override;

private:
    // data member for the cargo capacity of the ship. 
    int cargoCapacity_;
};

#endif

