#ifndef SHAPE_H
#define SHAPE_H

#include <stdexcept>

// The following code defines a templated Shape class with a protected size member variable and public member functions
template<typename T>
class Shape {
protected:
	T size;
public:
	Shape(T size) : size(size) {}
	T getSize() const {
		return size;
	}
	void setSize(T newSize) {
		size = newSize;
	}
	virtual T getCircumference() const = 0; // Pure virtual function to get the circumference of a shape
	virtual T getArea() const = 0; // Pure virtual function to get the area of a shape
	virtual T getVolume() const = 0; // Pure virtual function to get the volume of a shape
};

// The following code defines a NegativeSizeException class that inherits from runtime_error
// It is used to throw an exception when a shape's size is negative
class NegativeSizeException : public std::runtime_error {
public:
	NegativeSizeException(const std::string& message) : std::runtime_error(message) {}
};

#endif