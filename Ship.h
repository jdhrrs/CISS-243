#ifndef SHIP_H
#define SHIP_H

#include <string> 

using namespace std;
// Declare the ship class
class Ship {
public:
    // Declare constructor that takes 2 parameters 
    Ship(const std::string& name, int yearBuilt);

    // declare the accessor functions for the name and yearBuilt data members 
    const std::string& getName() const;
    int getYearBuilt() const;

    // Declare the mutator functions for the name and yearBuilt data members. 
    void setName(const std::string& name);
    void setYearBuilt(int yearBuilt);

    // Declare virtual function for printing info about the ship 
    virtual void print() const;

    // Declare the data members of the Ship class. 
private:
    std::string name_;
    int yearBuilt_;
};

#endif
