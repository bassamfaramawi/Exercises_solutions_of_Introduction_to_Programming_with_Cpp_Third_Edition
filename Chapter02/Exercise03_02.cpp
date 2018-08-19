/*
 * 2.3 (Convert feet into meters) Write a program that reads a number in feet, 
   converts it to meters, and displays the result. One foot is 0.305 meter
 */

/* 
 * File:   Exercise03_02.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on March 19, 2018, 7:21 PM
 */

#include <iostream>

using namespace std;

int main() {
    
    double feet;
    
    // Asking for entering input
    cout << "Enter a value for feet: ";
    cin >> feet;
    
    // Print the result
    cout << feet << " feet is " << feet * 0.305 << " meters" << endl;

    return 0;
}

