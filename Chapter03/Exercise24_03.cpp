/*
 3.24  (Use the &&, || and ^ operators) Write a program that prompts the user to 
 *   enter an integer and determines whether it is divisible by 5 and 6, whether 
 *   it is divisible by 5 or 6, and whether it is divisible by 5 or 6, but not both.
 */

/* 
 * File:   Exercise24_03.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on August 22, 2018, 1:45 AM
 */

#include <iostream>  // For cin & cout functions

using namespace std;

int main() {
    // Prompt the user for entering an integer:
    cout << "Enter an integer: ";
    int  number;
    
    cin >> number;  // Receive value
    
    // Check the cases and display the result
    cout << "Is " + number + " divisible by 5 and 6? " << 
            ((number % 5 == 0 && number % 6 == 0) ? "true" : "false") << endl;
    cout << "Is " + number + " divisible by 5 or 6? " << 
            ((number % 5 == 0 || number % 6 == 0) ? "true" : "false") << endl;
    cout << "Is " + number + " divisible by 5 and 6, but not both? " <<
            ((number % 5 == 0 ^ number % 6 == 0) ? "true" : "false");

    return 0;
}

