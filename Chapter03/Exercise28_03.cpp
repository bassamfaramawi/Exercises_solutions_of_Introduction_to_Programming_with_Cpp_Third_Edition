/*
 *3.28  (Financials: currency exchange) Write a program that prompts the user to 
enter the exchange rate from currency in U.S. dollars to Chinese RMB. Prompt the 7
user to enter 0 to convert from U.S. dollars to Chinese RMB and 1 to convert from
Chinese RMB and U.S. dollars. Prompt the user to enter the amount in U.S. dollars
or Chinese RMB to convert it to Chinese RMB or U.S. dollars, respectively.
 */

/* 
 * File:   Exercise28_03.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on August 22, 2018, 2:19 AM
 */

#include <iostream>  // For cin & cout functions

using namespace std;

int main() {
    // Asking to enter exchange rate from dollar to RMB
    cout << "Enter the exchange rate from dollars to RMB: ";
    double exchangeRate;
    
    cin >> exchangeRate;  // Receive value
    
    // Asking to enter 0 to convert dollars to RMB and 1 vice versa
    cout << "Enter 0 to convert dollars to RMB and 1 vice versa: ";
    int  convert;
    
    cin >> convert;  // Receive value
    
    // Initialize dollars double and RMB double
    double dollars, RMB;
    
    switch(convert) { 
        // If 0 convert from dollars to RMB
        case 0 : // Asking to enter the dollar amount
                 cout << "Enter the dollar amount: "; 
                 
                 cin >> dollars;  // Receive value
                 
                 // Calculate RMB and display the result
                 RMB = dollars * exchangeRate;
                 cout << "$" << dollars << " is " << 
                         (int)(RMB * 100) / 100.0 << " yuan";
                 break;
                 
        // If 0 convert from dollars to RMB
        case 1 : // Asking to enter the RMB amount
                 cout << "Enter the RMB amount: "; 
                 
                 cin >> RMB;  // Receive value
                 
                 // Calculate dollars and display the result
                 dollars = RMB / exchangeRate;
                 cout << RMB << "yuan is $" << 
                         (int)(dollars * 100) / 100.0;
                 break;
                 
        // Otherwise is an Incorrect input
        default : cout << "Incorrect input";      
    }

    return 0;
}

