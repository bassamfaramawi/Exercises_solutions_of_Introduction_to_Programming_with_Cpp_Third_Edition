/*
 * (Financial application: monetary units) Rewrite Listing 2.10, ComputeChange
   .java, to fix the possible loss of accuracy when converting a double value to 
   an int value. Enter the input as an integer whose last two digits represent 
   the cents. For example, the input 1156 represents 11 dollars and 56 cents.
 */

/* 
 * File:   Exercise24_02.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on March 25, 2018, 12:42 PM
 */

#include <iostream>

using namespace std;

int main() {
    
    int amount, remainingAmount, numberOfOneDollars, numberOfQuarters, 
            numberOfDimes, numberOfNickels, numberOfPennies;
    
    // Asking for entering inputs
    cout << "Enter an amount in integer, for example 1156: ";
    cin >> amount;
    
    // Calculate the values
    remainingAmount = amount;
    numberOfOneDollars = remainingAmount / 100;
    remainingAmount = remainingAmount % 100;
        
    numberOfQuarters = remainingAmount / 25;
    remainingAmount = remainingAmount % 25;
        
    numberOfDimes = remainingAmount / 10;
    remainingAmount = remainingAmount % 10;
        
    numberOfNickels = remainingAmount / 5;
    remainingAmount = remainingAmount % 5;
        
    numberOfPennies = remainingAmount;
        
    // Display the results
    cout << "Your amount " << amount << " consists of " << endl;
    cout << "    " << numberOfOneDollars << " dollars" << endl;
    cout << "    " << numberOfQuarters << " quarters" << endl;
    cout << "    " << numberOfDimes << " dimes" << endl;
    cout << "    " << numberOfNickels << " nickels" << endl;
    cout << "    " << numberOfPennies << " pennies" << endl;

    return 0;
}

