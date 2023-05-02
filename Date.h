#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>

class Date {
public:
    Date(int d = 1, int m = 1, int y = 2000);
    int getDay() const;
    void setDay(int d);
    int getMonth() const;
    void setMonth(int m);
    int getYear() const;
    void setYear(int y);
    void print() const;
private:
    int day;
    int month;
    int year;
};

#endif
