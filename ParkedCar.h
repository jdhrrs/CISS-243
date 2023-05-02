// Justin Harris 
// CISS 243 - Programming 3 
// Parking Meter Code 
// 03/07/2023

// Pseudo Code 
// This header file defines the Parked Car Class which has a default constructor 
// a Parametereized Constructor, A copy constructor, getters and setters methods 
// and an Overload operator for outputting the object to an output stream. 
// Class also has car obejct and an interger variable for mins parked
// The car object is defined as private and the functions are in the public class
// File will also include Car.h header file.
#pragma once
#ifndef ParkedCar_H
#define ParkedCar_H

#include "Car.h" // Car header file 

// Define the Parked_Car struct
class Parked_Car {
public:
	// Default constructor
	Parked_Car();

	// Parameterized constructor
	Parked_Car(const std::string& Make, const std::string& Model, const std::string& Color,
		const std::string& Lic_Num, int Mins_Parked);

	// Copy constructor
	Parked_Car(const Parked_Car& other);

	// Accessor method to get the Car object
	const Car& GetCar();

	// Accessor method to get the minutes parked
	int Get_Mins_Parked() const;

	// Mutator method to set the minutes parked
	void Set_Min_Parked(int Mins_Parked);

	// Overload the << operator to output the object to an ostream object
	friend std::ostream& operator<<(std::ostream& OutputStream, const Parked_Car& Car);

private:
	Car Car; // Car object
	int Mins_Parked; // Minutes parked
};
#endif