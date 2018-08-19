/*
 * *2.23 (Cost of driving) Write a program that prompts the user to enter the 
    distance to drive, the fuel efficiency of the car in miles per gallon, and 
    the price per gallon, and displays the cost of the trip
 */

/* 
 * File:   Exercise21_02.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on March 25, 2018, 12:50 PM
 */

#include <iostream>

using namespace std;

int main() {
    
    double drivingDistance, milesPerGallon, pricePerGallon, cost;
    
    // Asking for entering inputs
    cout <<  "Enter the driving distance: ";
    cin >> drivingDistance;
        
    cout << "Enter miles per gallon: ";
    cin >> milesPerGallon;
        
    cout << "Enter price per gallon: ";
    cin >> pricePerGallon;
        
    // Calculate the cost
    cost = drivingDistance / milesPerGallon * pricePerGallon;
        
    // Display the result
    cout << "The cost of driving is $" << (int)(cost * 100) / 100.0 << endl;
    return 0;
}

