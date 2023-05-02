// Justin Harris 
// CISS 243 - Programming 3 
// Pariing Ticket Program 
// 03/07/2023

// Pseudo ***********************************************************************************************************************************************************************
// Include necessary header files.
// Define a class Parking_Meter with default constructor and a constructor with one parameter.
// Declare public member functions Get_Mins_Purchased() and Set_Mins_Purchased() that respectively return and set the value of private member variable Mins_Purchased.
// Define a friend function operator<< to overload the insertion operator that prints the value of private member variable Mins_Purchased.
// Declare private member variable Mins_Purchased.
// ******************************************************************************************************************************************************************************
#pragma once
#ifndef PARKING_METER_H
#define PARKING_METER_H

#include <iostream> // Required Header File 

// Define class 
class Parking_Meter {
public:
    // Default constructor with member initizaliation
    Parking_Meter();
    // Constructor with Parameter 
    Parking_Meter(int Mins_Purchased);

    // Getter Function to return Mins_Purchased Value 
    int Get_Mins_Purchased() const;
    // Setter function to ret Mins_Purchased Value 
    void Set_Mins_Purchased(int Mins_Purchased);
    // Friend function to overload the << operator for output stream
    friend std::ostream& operator<<(std::ostream& OutputStream, const Parking_Meter& Meter);

// Private Member Variable 
private:
    int Mins_Purchased;
};

#endif
