/*
 *5.46 (Computer architecture: bit-level operations) A short value is stored in 
16 bits. Write a program that prompts the user to enter a short integer and 
displays the 16 bits for the integer.
 */

/* 
 * File:   Exercise46_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on October 9, 2018, 11:26 PM
 */

#include <iostream> // For the cin & cout functions

using namespace std;

int main() {
    // Prompt the user to enter a short value
    cout << "Enter a short number: ";
    short number;
    cin >> number;
    
    // Display the result
    cout << "The bits are ";
    
    for(int n = 15; n >= 0; n--)
        cout << ( (number >> n) & 1);

    return 0;
}

