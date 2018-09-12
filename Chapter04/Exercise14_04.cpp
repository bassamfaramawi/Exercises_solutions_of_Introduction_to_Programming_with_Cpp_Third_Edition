/*
 *4.11 (Decimal to hex) Write a program that prompts the user to enter an integer 
between 0 and 15 and displays its corresponding hex number.
 */

/* 
 * File:   Exercise14_04.cpp
 * Author: Administrator
 *
 * Created on September 12, 2018, 8:56 AM
 */

#include <iostream> // For cin & cout functions

using namespace std;

int main() {
    // Prompt the user to enter a decimal value (0 to 15)
        cout << "Enter a decimal value (0 to 15): ";
        int decimal;
        cin >> decimal;
        
        if(decimal > 15 || decimal < 0)  // If the input isn't in (0 - 15) range
            cout << decimal << " is an invalid input";
        
        else { // Otherwise display the hex value
            // Display the result
            cout << "The hex value is ";
            
            switch(decimal) {
                case 10 : cout << "A";
                          break;
                case 11 : cout << "B";
                          break;
                case 12 : cout << "C";
                          break;
                case 13 : cout << "D";
                          break;
                case 14 : cout << "E";
                          break;
                case 15 : cout << "F";
                          break;
                default : cout << decimal;
            }
        }

    return 0;
}

