/*
 * 2.11 (Population projection) Rewrite Programming Exercise 1.11 to prompt the 
   user to enter the number of years and displays the population after the number 
   of years. Use the hint in Programming Exercise 1.11 for this program. The 
   population should be cast into an integer.
 */

/* 
 * File:   Exercise11_02.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on March 25, 2018, 2:15 AM
 */

#include <iostream>

using namespace std;

int main() {
    
    int numberOfYears;
    
    // Asking for entering inputs
    cout << "Enter the number of years: ";
    cin >> numberOfYears;
    
    // Calculate and display the population
    cout << "The population in 5 years is " ;
    cout << (int)(312032486 + 3600 * 24 * 365 * numberOfYears * 
            (1.0 / 7 - 1.0 / 13 + 1.0 /45));

    return 0;
}

