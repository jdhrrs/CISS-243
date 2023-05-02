// Justin Harris 
// CISS 243 - Programmingn 3 
// 04.11/2023
// Recursive Functions and Tests 


// Pseudo Code *******************************************************************************************************
// This program defines three recursive functions named power, reverseString, and sum.
// The main function testes these functions by calling them with different arguments. 
// The power function takes a base and exponenet as input and calculates the power of the
// base of the exponenet using recursion. The reverseString function takes a string as input 
// and reverses its charaters in place using recursion. The sum function takes an int n as input 
// and calculates the sum of all the positive ints from 1 to n using recustion. The main function 
// the three functions are called with different aguments and the results will be printed to the console 
// ******************************************************************************************************************** 

#include <iostream> // Input / Output 
#include <string> // String Library

using namespace std; // Using std snapespace 

// Recursive Power Function
// This function calculates the power of a given base to a given exponenet using recurision
// This function takes two parameters double value base which is the base and an int value exponent 
// that represents the exponent. If exponent is o the funtion returns 1 since any number rasie to the 0th 
// power is 1. If the exponenet is not 0, the function recursively calls itself with the same base and a 
// decremented expoonent. The recursive call continues until the exponent is decrememted to 0. 
// At that point the functoin returns 1 since any number raised to the 0th power is 1.the function multiplies
// the base value with the results of each recursive call, computing the value of base raised to the origional 
// exponenet. Once the calls have been completed the final result will be returned. 
double power(double base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    else {
        return base * power(base, exponent - 1);
    }
}

// This function takes a reference to a string str as its parameter and reverses 
// its contents in place. First the function check if the length of the string is 0, 
// if so it means string is empty. and the function returns wihth out doing anything. 
// If the length of the string is not 0, the function retrieves the last character of theh
// string using back method,and stores in variable lastChar. It removes the last char 
// from string using the pop_back method. It recursively calls itself with shortened string. 
// which no has one less char at the end. after recursive call returns, the function then 
// inserts the lastChar character at the begining of the string using the insert method. 
// Process continues until length of the string becomes 0, the function returns andn string 
// should be reversed. 
void reverseString(string& str) { // Pass by reference using &
    if (str.length() == 0) {
        return;
    }
    else {
        char lastChar = str.back();
        str.pop_back();
        reverseString(str);
        str.insert(0, 1, lastChar);
    }
}

// Sum of Numbers Function
//  This function takes one parameter, an int n representing the upper limit of calculation 
// if the parameter n is equal to -1, the function returns 1, which is the base case of the 
// recursion. this means theat the function stops recursing and starts returning values once n 
// becomes 1. If the Sum of of all positive numbers from 1 to n. by adding n to the sum of all
// from tnts from 1 to n-1. to calculate the sum of all psoitive numbes from 1 to n-1, the 
// function calls itself recursively with the parameters n-1. It continues to call until the base 
// case is reached, at which point the function starts returning values. As the recursive calls return 
// the function adds the value of n to the sum of all positibe ints from 1 to n-1. 
// Once all the recursiv calls have been finished, the final result, which is the sum of all 
// positive numbers from 1 to n are returned. 
int sum(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        return n + sum(n - 1);
    }
}

int main() {
    // Test power function
    cout << "2 to the power of 4 is: " << power(2, 4) << endl;

    // Test reverseString function
    string str1 = "Hello CISS 243";
    cout << "Original string: " << str1 << endl;
    reverseString(str1);
    cout << "Reversed string: " << str1 << endl;

    // Test sum function
    int n = 20;
    cout << "The sum of numbers from 1 to " << n << " is: " << sum(n) << endl;

    system("pause");
    return 0;
}