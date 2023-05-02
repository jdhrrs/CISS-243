#include "Date.h"

using namespace std;

Date::Date(int d, int m, int y) {
    setDay(d);
    setMonth(m);
    setYear(y);
}

int Date::getDay() const {
    return day;
}

void Date::setDay(int d) {
    day = d;
}

int Date::getMonth() const {
    return month;
}

void Date::setMonth(int m) {
    month = m;
}

int Date::getYear() const {
    return year;
}

void Date::setYear(int y) {
    year = y;
}

void Date::print() const {
    static const string months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    cout << months[month - 1] << " " << day << ", " << year << endl;
}
