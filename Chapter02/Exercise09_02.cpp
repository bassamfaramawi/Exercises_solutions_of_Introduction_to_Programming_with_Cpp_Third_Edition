/*
 * 2.9 (Physics: acceleration) Average acceleration is defined as the change of 
    velocity divided by the time taken to make the change, as shown in the 
    following formula:
    a =  (v1 - v0) / t
    Write a program that prompts the user to enter the starting velocity v0 in 
    meters/ second, the ending velocity v1 in meters/second, and the time span t 
    in seconds, and displays the average acceleration.
 */

/* 
 * File:   Exercise09_02.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on March 25, 2018, 1:39 AM
 */

#include <iostream>

using namespace std;

int main() {
    
    double v0, v1, t, a;
    
    // Asking for entering input
    cout << "Enter v0, v1, and t: ";
    cin >> v0 >> v1 >> t;
    
    // Compute the average acceleration
    a = (v1 - v0) / t;
    
    // Display the average acceleration
    cout << "The average acceleration is " << a << endl;

    return 0;
}