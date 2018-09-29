/*
 5.15 (Find the smallest n such that 3^n > 30,000) Use a while loop to find the 
 smallest integer n such that 3^n is greater than 30,000.
 */

/* 
 * File:   Exercise15_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on September 29, 2018, 4:19 PM
 */

#include <iostream> // For the cin & cout functions
#include <cmath>  // For math functions

using namespace std;

int main() {
    int number = 0;  // Start from number 0
    
    while((pow(3, number)) < 30000)
        number++;
    
    // Display the result
    cout << "The smallest number such that 3^n > 30000 is: " << number;

    return 0;
}

