#pragma once
#ifndef CAR_H
#define CAR_H

#include <string>
#include <iostream>

class Car {
public: 
	Car();
    Car(const std::string& Make, const std::string& Model, const std::string& Color, const std::string& Lic_Num);
    void Set_Make(const std::string& Make);
    std::string Get_Make() const;
    void Set_Model(const std::string& Model);
    std::string Get_Model() const;
    void Set_Color(const std::string& Color);
    std::string Get_Color() const;
    void Set_Lic_Num(const std::string& Lic_Num);
    std::string Get_Lic_Num() const;
    friend std::ostream& operator<<(std::ostream& OutputStream, const Car& Car);

private:
    std::string Make;
    std::string Model;
    std::string Color;
    std::string Lic_Num;
};


#endif
