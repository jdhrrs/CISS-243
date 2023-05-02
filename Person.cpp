#include "person.h"

Person::Person(const std::string& n, const std::string& a, const std::string& c,
    const std::string& s, const std::string& p)
    : name(n), address(a), city(c), state(s), phone(p) {}

std::string Person::getName() const {
    return name;
}

void Person::setName(const std::string& n) {
    name = n;
}

std::string Person::getAddress() const {
    return address;
}

void Person::setAddress(const std::string& a) {
    address = a;
}

std::string Person::getCity() const {
    return city;
}

void Person::setCity(const std::string& c) {
    city = c;
}

std::string Person::getState() const {
    return state;
}

void Person::setState(const std::string& s) {
    state = s;
}

std::string Person::getPhone() const {
    return phone;
}

void Person::setPhone(const std::string& p) {
    phone = p;
}
