#include "ParkedCar.h"
#include "ParkedCar.h"

Parked_Car::Parked_Car() { // Default Construct Implementation 

}

// Parameter struct implementation 
Parked_Car::Parked_Car(const std::string& Make, const std::string& Model, const std::string& Color,
	const std::string& Lic_Num, int Mins_Parked) : Car(Make, Model, Color, Lic_Num),

	Mins_Parked(Mins_Parked) { 
}

// Copy Constructor 
Parked_Car::Parked_Car(const Parked_Car& other) : Car(other.Car),

Mins_Parked(other.Mins_Parked) { 

}
// Getter method implementation of car object
const Car& Parked_Car::GetCar() {
	return Car;
}

// Getter method implementation to ge3t the minutes parked 
int Parked_Car::Get_Mins_Parked() const {
	return Mins_Parked;
}

// Mutator method implementation to set the minutes parked 
void Parked_Car::Set_Min_Parked(int Mins_Parked) {
	this->Mins_Parked = Mins_Parked;
}

// Overload operator implementation to output the ostream object
std::ostream& operator<<(std::ostream& OutputStream,  Parked_Car& Car) {
	OutputStream << "Make: " << Car.GetCar().Get_Make() << "\n";
	OutputStream << "Model: " << Car.GetCar().Get_Model() << "\n";
	OutputStream << "Color: " << Car.GetCar().Get_Color() << "\n";
	OutputStream << "License # " << Car.GetCar().Get_Lic_Num() << "\n";
	OutputStream << "Number Of Mins Parked " << Car.Get_Mins_Parked() << "\n";
	return OutputStream;
}

