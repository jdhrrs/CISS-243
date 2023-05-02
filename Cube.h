#ifndef CUBE_H
#define CUBE_H

#include "Shape.h"//  Base Class 

template<typename T>
class Cube : public Shape<T> { // Cube i subclass of shape 
public:
    Cube(T size) : Shape<T>(size) {} // Constructor takes size and passes to base class constructor  
    T getCircumference() const override; // virtual function to calculate circumference of cube 
    T getArea() const override; // Calculate Area of cube 
    T getVolume() const override; // calculate volume of cube 
};

#include "Cube.cpp" // implementation file included 

#endif
