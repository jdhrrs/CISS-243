#ifndef PYRAMID_H
#define PYRAMID_H

#include "Shape.h"
#include <cmath>
#include <sstream>

template<typename T>
class Pyramid : public Shape<T> {
public:
    Pyramid(T size) : Shape<T>(size) {}

    // Not applicable for pyramid
    T getCircumference() const override {
        return 0;
    }

    // Calculates the surface area of the pyramid
    T getArea() const override {
        if (this->size < 0) {
            // Throws an exception if the size is negative
            std::stringstream ss;
            ss << "Pyramid size cannot be negative. Size is " << this->size;
            throw NegativeSizeException(ss.str());
        }
        // Formula for surface area of a pyramid
        return pow(this->size, 2) + 2 * this->size * sqrt(pow(this->size / 2, 2) + pow(this->size, 2));
    }

    // Calculates the volume of the pyramid
    T getVolume() const override {
        if (this->size < 0) {
            // Throws an exception if the size is negative
            std::stringstream ss;
            ss << "Pyramid size cannot be negative. Size is " << this->size;
            throw NegativeSizeException(ss.str());
        }
        // Formula for volume of a pyramid
        return pow(this->size, 3) / 3;
    }
};

