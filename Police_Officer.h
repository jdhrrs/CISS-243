// Police_Officer.h

#ifndef POLICE_OFFICER_H
#define POLICE_OFFICER_H

#include <string>
#include <iostream>
#include "ParkedCar.h"
#include "Parking_Meter.h"
#include "Parking_Ticket.h"

class Police_Officer {
public:
	Police_Officer();
	Police_Officer(std::string name, std::string Badge_Num);
	std::string Get_Name() const;
	std::string Get_Badge_Num() const;
	void Set_Name(std::string Name);
	void Set_Badge_Num(std::string Badge_Num);
	Parking_Ticket* patrol(const Parked_Car& Car, const Parking_Meter& Meter);
	friend std::ostream& operator<<(std::ostream& OutputStream, const Police_Officer& Officer);

private:
	std::string name;
	std::string Badge_Num;
};

#endif // POLICE_OFFICER_H