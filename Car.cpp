#include "Car.h"

Car::Car() {}

Car::Car(const std::string& Make, const std::string& Model, 
	const std::string& Color, const std::string& Lic_Num) : 
	Make(Make), Model(Model), Color(Color), Lic_Num(Lic_Num) {}

void Car::Set_Make(const std::string& Make) {
	this->Make = Make;
}

std::string Car::Get_Make() const {
	return Make;
}

void Car::Set_Model(const std::string& Model) {
	this->Model = Model;
}

std::string Car::Get_Model() const {
	return Model;
}

void Car::Set_Color(const std::string& Color) {
	this->Color = Color;
}

std::string Car::Get_Color() const {
	return Color;
}

void Car::Set_Lic_Num(const std::string& Lic_Num) {
	this->Lic_Num = Lic_Num;
}
std::string Car::Get_Lic_Num() const {
	return Lic_Num;
}

std::ostream& operator<<(std::ostream& OutputStream, const Car& Car) {
	OutputStream << Car.Color << " " << Car.Make << " " << Car.Model << ", " << Car.Lic_Num;
	return OutputStream;
}