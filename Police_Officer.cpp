#include "Police_Officer.h"

Police_Officer::Police_Officer() : name(""), Badge_Num("")
{
}

Police_Officer::Police_Officer(std::string name, std::string Badge_Num) : name(name), Badge_Num(Badge_Num)
{
}

std::string Police_Officer::Get_Name() const
{
    return name;
}

std::string Police_Officer::Get_Badge_Num() const
{
    return Badge_Num;
}

void Police_Officer::Set_Name(std::string Name)
{
    this->name = Name;
}

void Police_Officer::Set_Badge_Num(std::string Badge_Num)
{
    this->Badge_Num = Badge_Num;
}

std::ostream& operator<<(std::ostream& OutputStream, const Police_Officer& Officer)
{
    OutputStream << "Police officer: " << Officer.Get_Name() << " (Badge Number: " << Officer.Get_Badge_Num() << ")";
    return OutputStream;
}

Parking_Ticket* Police_Officer::patrol(const Parked_Car& Car, const Parking_Meter& Meter)
{
    int Minutes_Parked = Car.Get_Mins_Parked();
    int Minutes_Purchased = Meter.Get_Mins_Purchased();

    if (Minutes_Parked > Minutes_Purchased)
    {
        int Minutes_Illegally_Parked = Minutes_Parked - Minutes_Purchased;
        double Fine = 25.0;

        if (Minutes_Illegally_Parked > 60)
        {
            Fine += 10.0 * ((Minutes_Illegally_Parked - 60) / 60.0);
        }

        Parked_Car parked_Car = Car;
        Parking_Ticket* Ticket = new Parking_Ticket(parked_Car, Minutes_Illegally_Parked);
        Ticket->Set_Fine(Fine);
        return Ticket;
    }
    else
    {
        return nullptr;
    }
}