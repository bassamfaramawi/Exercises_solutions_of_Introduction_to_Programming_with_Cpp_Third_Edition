/*
 * 2.4 (Convert pounds into kilograms) Write a program that converts pounds into
kilograms. The program prompts the user to enter a number in pounds, converts it
to kilograms, and displays the result. One pound is 0.454 kilograms.
 */

/* 
 * File:   Exercise.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on March 19, 2018, 7:28 PM
 */

#include <iostream>

using namespace std;

int main() {
    
    double pounds;
    
    // Asking for entering input
    cout << "Enter a number in pounds: ";
    cin >> pounds;
    
    // Print the result
    cout << pounds << " pounds is " << pounds * 0.454 << " kg" << endl;

    return 0;
}

