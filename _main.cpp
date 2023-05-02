// Justin Harris 
// CISS 243 - Programming 3 
// 03/21/2023
// Geometry Calculator with Exceptions 

// ********************************************************************************************************
// The main program creates instances of the cube and pyyramid classes using different data types and tests
// their methods getCircumference(), getArea(), and getVolume().  It also includes exception handeling using
// the try and catch blocks to handle exceptions thrown by the NegativeSizeException class if a negative size
// is passed to the setSize() method or if invalide size is entered by the user.  The program then prompts user
// to enter the new size for Pyramid 2 if the origianl size was negative or invalid. Then it caluclates and 
// displays the new volume of Pyramid2. 
// **********************************************************************************************************

// My exceptions are not throwing and I am not quite sure why they are not thowing. 
// Can you please tell me what I did wrong ?

#include <iostream>
#include <string>
#include <stdexcept>
#include <typeinfo>
#include "Shape.h"
#include "Cube.h"
#include "Pyramid.h"


int main() {
    // Create instances of Cube and Pyramid using different data types
    Cube<int> cube1(5);
    Cube<double> cube2(3.2);
    Pyramid<float> pyramid1(8.7);
    Pyramid<int> pyramid2(-3); // Should throw NegativeSizeException

    try {
        // Test getCircumference method
        std::cout << "Cube1 circumference: " << cube1.getCircumference() << std::endl;
        std::cout << "Cube2 circumference: " << cube2.getCircumference() << std::endl;
        std::cout << "Pyramid1 circumference: " << pyramid1.getCircumference() << std::endl;
        std::cout << "Pyramid2 circumference: " << pyramid2.getCircumference() << std::endl; // Should throw NegativeSizeException
    }
    catch (const NegativeSizeException& e) {
        // Catch the exception thrown by Pyramid2 and print an error message
        std::cerr << typeid(e).name() << ": " << e.what() << std::endl;
    }

    try {
        // Test getArea method
        std::cout << "Cube1 area: " << cube1.getArea() << std::endl;
        std::cout << "Cube2 area: " << cube2.getArea() << std::endl;
        std::cout << "Pyramid1 area: " << pyramid1.getArea() << std::endl;
        std::cout << "Pyramid2 area: " << pyramid2.getArea() << std::endl; // Should throw NegativeSizeException
    }
    catch (const NegativeSizeException& e) {
        // Catch the exception thrown by Pyramid2 and print an error message
        std::cerr << typeid(e).name() << ": " << e.what() << std::endl;
    }

    try {
        // Test getVolume method
        std::cout << "Cube1 volume: " << cube1.getVolume() << std::endl;
        std::cout << "Cube2 volume: " << cube2.getVolume() << std::endl;
        std::cout << "Pyramid1 volume: " << pyramid1.getVolume() << std::endl;
        std::cout << "Pyramid2 volume: " << pyramid2.getVolume() << std::endl; // Should throw NegativeSizeException
    }
    catch (const NegativeSizeException& e) {
        // Catch the exception thrown by Pyramid2 and print an error message
        std::cerr << typeid(e).name() << ": " << e.what() << std::endl;

        // Prompt the user to enter a new size for Pyramid2
        std::cout << "Enter a new size for Pyramid2: ";
        int newSize;
        std::cin >> newSize;

        // Validate the user input and set the new size for Pyramid2
        while (newSize <= 0) {
            std::cout << "Size must be positive. Enter a new size for Pyramid2: ";
            std::cin >> newSize;
        }
        pyramid2.setSize(newSize);

        // Calculate and print the new volume of Pyramid2
        std::cout << "New Pyramid2 volume: " << pyramid2.getVolume() << std::endl;
    }

    return 0;
}
