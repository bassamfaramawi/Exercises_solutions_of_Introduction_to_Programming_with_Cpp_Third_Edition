/*
 5.14 (Find the largest n such that 2^n < 30,000)) Use a while loop to find the 
 largest integer n such that 2^n is less than 30,000.
 */

/* 
 * File:   Exercise14_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on September 29, 2018, 4:13 PM
 */

#include <iostream> // For the cin & cout functions
#include <cmath>  // For math functions

using namespace std;

int main() {
    int number = 0;  // Start from number 0
    int lastNumber = 0; // The number previous of current number
    
    while((pow(2, number)) < 30000) {
        lastNumber = number;
        number++;
    }
    
    // Display the result
    cout << "The largest number such that 2^n < 30,000 is: " << lastNumber;

    return 0;
}

