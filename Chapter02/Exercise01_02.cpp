/*
 * 2.1 (Convert Celsius to Fahrenheit) Write a program that reads a Celsius 
   degree in a double value from the console, then converts it to Fahrenheit and 
   displays the result. The formula for the conversion is as follows:
   fahrenheit = (9 / 5) * celsius + 32
 */

/* 
 * File:   Exercise01_02.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on March 19, 2018, 6:41 PM
 */

#include <iostream>
using namespace std;

int main() {
    
    double celsius;
    
    // Asking for entering input
    cout << "Enter a degree in Celsius: ";
    cin >> celsius;
    
    // Print the result
    cout << celsius << " Celsius is " << (9. /5) * celsius + 32 << " fahrenheit";

    return 0;
}

