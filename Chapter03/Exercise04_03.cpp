/*
 **3.4 (Check the speed) Write a program that prompts the user to enter the speed 
 * of a vehicle. If speed is less than 20, display too slow; if speed is greater 
 * than 80, display too fast; otherwise, display just right.
 */

/* 
 * File:   Exercise04_03.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on August 12, 2018, 9:53 AM
 */

#include <iostream>      // for cin & cout functions

using namespace std;

int main() {
    // Prompt the user to enter the speed of a vehicle: 
    cout << "Enter the speed of a vehicle: ";   
    double speed;
    
    cin >> speed;     // Receive value
    
    if(speed < 20)  // If < 20
        cout << "too slow";
    
    else if (speed > 80) // If > 80
        cout << "too fast";
    
    else  // Otherwise just right
        cout << "just right";

    return 0;
}

