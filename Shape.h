#ifndef SHAPE_H
#define SHAPE_H

#include <stdexcept>
#include <sstream> 

// Define a template class Shape with a type parameter T
template<typename T>
class Shape {
protected:
	T size; // Protected member variable size of type T
public:
	Shape(T size) : size(size) {} // Constructor that takes in size and sets size to it
	T getSize() const { // Method to get size, which returns a value of type T
		return size;
	}
	void setSize(T newSize) { // Method to set size to a new value of type T
		size = newSize;
	}
	virtual T getCircumference() const = 0; // Pure virtual method to get circumference, which returns a value of type T
	virtual T getArea() const = 0; // Pure virtual method to get area, which returns a value of type T
	virtual T getVolume() const = 0; // Pure virtual method to get volume, which returns a value of type T
};

// Define a class NegativeSizeException that inherits from the standard runtime_error class
class NegativeSizeException : public std::runtime_error {
public:
	NegativeSizeException(const std::string& message) : std::runtime_error(message) {} // Constructor that takes in a message and sets it to the parent runtime_error class's constructor
};

#endif