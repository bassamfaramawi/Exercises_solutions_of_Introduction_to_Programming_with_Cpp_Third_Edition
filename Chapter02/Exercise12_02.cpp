/*
 * 2.12 (Physics: finding runway length) Given an airplane’s acceleration a and 
   take-off speed v, you can compute the minimum runway length needed for an 
   airplane to take off using the following formula:
        length = v2 / 2a
   Write a program that prompts the user to enter v in meters/second (m/s) and 
   the acceleration a in meters/second squared (m/s2), and displays the minimum 
   runway length
 */

/* 
 * File:   Exercise12_02.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on March 25, 2018, 2:23 AM
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double speed, acceleration;
    
    // Asking for entering inputs
    cout << "Enter speed and acceleration: ";
    cin >> speed >> acceleration;
    
    // Calculate and display the result
    cout << "The minimum runway length for this airplane is ";
    cout << pow(speed, 2) / (2 * acceleration) << endl;

    return 0;
}

