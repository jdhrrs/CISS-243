#ifndef PARKINGTICKET_H
#define PARKINGTICKET_H
//********************************************************************************************************************************************************
// The header file named "ParkingTicket.h" declares a C++ class named Parking_Ticket with member functions and variables related to parking tickets.
//  It also includes the "ParkedCar.h" header and overloads the << operator for output to a stream.
// ******************************************************************************************************************************************************

#include "ParkedCar.h"
#include <iostream>

class Parking_Ticket {
public:
    Parking_Ticket();
    Parking_Ticket(const Parked_Car& car, int minutes);
    const Parked_Car& Get_Parked_Car() const;
    int Get_Minutes() const;
    double Get_Fine() const;
    void Set_Fine(double Fine);
    void Set_Parked_Car(const Parked_Car& car);
    void Set_Minutes(int minutes);
    friend std::ostream& operator<<(std::ostream& OutputStream, const Parking_Ticket& Ticket);
private:
    Parked_Car Car;
    int Minutes;
    double Fine;
    void Calculate_Fine();
};

#endif
