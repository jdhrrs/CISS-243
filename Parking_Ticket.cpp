// Justin Harris 
// CISS 243 - Programming 3 
// Pa/king Program 
// 03/08/2023

// Pseudo Code 





#include "Parking_Ticket.h"
#include "ParkedCar.h"
#include <ostream>
#include <iostream>

Parking_Ticket::Parking_Ticket() {
    // Default constructor
}

Parking_Ticket::Parking_Ticket(const Parked_Car& car, int minutes) :
    Car(car),
    Minutes(minutes) {
    Calculate_Fine();
}

void Parking_Ticket::Calculate_Fine() {
    int hours = (Minutes + 59) / 60; // Round up to the nearest hour
    Fine = 25.0;
    if (hours > 1) {
        Fine += (hours - 1) * 10.0;
    }
}

const Parked_Car& Parking_Ticket::Get_Parked_Car() const {
    return Car;
}

int Parking_Ticket::Get_Minutes() const {
    return Minutes;
}

double Parking_Ticket::Get_Fine() const {
    return Fine;
}

void Parking_Ticket::Set_Parked_Car(const Parked_Car& Car) {
    this->Car = Car;
    Calculate_Fine();
}

void Parking_Ticket::Set_Minutes(int Minutes) {
    this->Minutes = Minutes;
    Calculate_Fine();
}

std::ostream& operator<<(std::ostream& OutputStream, const Parking_Ticket& Ticket) {
    OutputStream << "Car Information:\n" << Ticket.Get_Parked_Car();
    OutputStream << "Fine: $" << Ticket.Get_Fine() << "\n";
    return OutputStream;
}

void Parking_Ticket::Set_Fine(double fine) {

    Fine = fine;
};