#include <iostream>
#include "Parkedcar.h"
#include "Parking_Meter.h"
#include "Parking_Ticket.h"
#include "Police_Officer.h"

using namespace std;

int main()
{
    Parking_Ticket* ticket = nullptr;

    // Car parked for less than an hour
    Parked_Car car1("Toyota", "Camry", "Red", "ABC123", 40);
    Parking_Meter meter1(60);
    Police_Officer officer1("Joe Friday", "4788");
    ticket = officer1.patrol(car1, meter1);
    if (ticket != nullptr)
    {
        cout << officer1 << endl;
        cout << *ticket << endl;
        delete ticket;
        ticket = nullptr;
    }
    else
    {
        cout << "No crimes were committed.\n";
    }

    // Car parked for exactly one hour
    Parked_Car car2("Ford", "F-150", "Black", "XYZ456", 60);
    Parking_Meter meter2(60);
    Police_Officer officer2("Jane Smith", "7521");
    ticket = officer2.patrol(car2, meter2);
    if (ticket != nullptr)
    {
        cout << officer2 << endl;
        cout << *ticket << endl;
        delete ticket;
        ticket = nullptr;
    }
    else
    {
        cout << "No crimes were committed.\n";
    }

    // Car parked for more than one hour
    Parked_Car car3("Honda", "Civic", "Blue", "DEF789", 90);
    Parking_Meter meter3(60);
    Police_Officer officer3("John Doe", "1234");
    ticket = officer3.patrol(car3, meter3);
    if (ticket != nullptr)
    {
        cout << officer3 << endl;
        cout << *ticket << endl;
        delete ticket;
        ticket = nullptr;
    }
    else
    {
        cout << "No crimes were committed.\n";
    }

    return 0;
}