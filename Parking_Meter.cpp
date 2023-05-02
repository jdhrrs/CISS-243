// Justin Harris 
// CISS 243 - Programming 3 
// Parking Ticket Program 
// 03/07/2023

// Pseudo *******************************************************************************************************************************************
// Implementation of member functions of the Parking_Meter class
// The class has a default constructor and a constructor that has a parameter 
// Which will initialize the Mins_purchased variable. 
// There are getter and setter functions to get and set the value of the Mins_Purchased variable. 
// These functions will be used to miniputlate the state of the parking meter object. 
// ***************************************************************************************************************************************************

#include <ostream>
#include <iostream>
#include "Parking_Meter.h"


// Implementation of Parking_Meter class member functions

// Default constructor with Member initialization
Parking_Meter::Parking_Meter() : Mins_Purchased(0) {
}

// Constructor with parameter
Parking_Meter::Parking_Meter(int Mins_Purchased) : Mins_Purchased(Mins_Purchased) {
}

// Getter function to return Mins_Purchased value
int Parking_Meter::Get_Mins_Purchased() const {
    return Mins_Purchased;
}

// Setter function to set Mins_Purchased value
void Parking_Meter::Set_Mins_Purchased(int Mins_Purchased) {
    this->Mins_Purchased = Mins_Purchased;
}

// Friend function to overload the << operator for output stream
std::ostream& operator<<(std::ostream& OutputStream, const Parking_Meter& Meter) {
    OutputStream << "Minutes Purchased: " << Meter.Get_Mins_Purchased() << "\n";
    return OutputStream;
}