
#ifndef CRUISESHIP_H
#define CRUISESHIP_H


#include "Ship.h"

using namespace std;

// declare the CruiseShip class that inherits from the Ship class
class CruiseShip : public Ship {
public:
    // declare the constructor that takes three parameters
    CruiseShip(const std::string& name, int yearBuilt, int maxPassengers);

    // declare the accessor and mutator functions for the maxPassengers data member
    int getMaxPassengers() const;
    void setMaxPassengers(int maxPassengers);

    // declare the print function that overrides the base class's print function
    virtual void print() const override;

private:
    int maxPassengers_;
};

#endif
