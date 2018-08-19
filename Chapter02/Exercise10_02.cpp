/*
 * 2.10 (Science: calculating energy) Write a program that calculates the energy 
needed to heat water from an initial temperature to a final temperature. Your 
program should prompt the user to enter the amount of water in kilograms and the 
initial and final temperatures of the water. The formula to compute the energy is
Q = M * (finalTemperature – initialTemperature) * 4184
where M is the weight of water in kilograms, temperatures are in degrees Celsius,
and energy Q is measured in joules
 */

/* 
 * File:   Exercise10_02.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on March 25, 2018, 2:01 AM
 */

#include <iostream>

using namespace std;

int main() {
    
    double waterAmount, initialTemperature, finalTemperature, energy;
    
    // Asking for entering inputs
    cout << "Enter the amount of water in kilograms: ";
    cin >> waterAmount;
    
    cout << "Enter the initial temperature: ";
    cin >> initialTemperature;
    
    cout << "Enter the final temperature: ";
    cin >> finalTemperature;
    
    // Calculate the energy
    energy = waterAmount * (finalTemperature - initialTemperature) * 4184;
    
    // Display the energy
    cout << "The energy needed is " << energy << endl;

    return 0;
}

