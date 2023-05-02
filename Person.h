#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
public:
    Person(const std::string& n = "", const std::string& a = "",
        const std::string& c = "", const std::string& s = "",
        const std::string& p = "");
    std::string getName() const;
    void setName(const std::string& n);
    std::string getAddress() const;
    void setAddress(const std::string& a);
    std::string getCity() const;
    void setCity(const std::string& c);
    std::string getState() const;
    void setState(const std::string& s);
    std::string getPhone() const;
    void setPhone(const std::string& p);
private:
    std::string name;
    std::string address;
    std::string city;
    std::string state;
    std::string phone;
};

#endif
