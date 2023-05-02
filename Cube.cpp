#ifndef CUBE_CPP
#define CUBE_CPP

#include "Cube.h"
#include <stdexcept>

template<typename T>
T Cube<T>::getCircumference() const {
    // check if cube size is negative
    if (this->size < 0) {
        // throw an exception if cube size is negative
        throw std::invalid_argument("Cube size cannot be negative.");
    }
    // calculate the circumference of the cube
    return 12 * this->size;
}

template<typename T>
T Cube<T>::getArea() const {
    // check if cube size is negative
    if (this->size < 0) {
        // throw an exception if cube size is negative
        throw std::invalid_argument("Cube size cannot be negative.");
    }
    // calculate the surface area of the cube
    return 6 * this->size * this->size;
}

template<typename T>
T Cube<T>::getVolume() const {
    // check if cube size is negative
    if (this->size < 0) {
        // throw an exception if cube size is negative
        throw std::invalid_argument("Cube size cannot be negative.");
    }
    // calculate the volume of the cube
    return this->size * this->size * this->size;
}
