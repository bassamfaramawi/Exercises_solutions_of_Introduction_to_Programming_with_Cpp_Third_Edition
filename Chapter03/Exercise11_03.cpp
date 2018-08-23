/*
 *3.11 (Loan Interest Rates) A bank uses the following function to calculate the 
rate of interest (in percentage) for a particular loan amount (in lakhs of dollars).

             (15, if 0.1 < a <= 1)
             (13.5, if 1 < a <= 5)
     r(a) =  (12.5, if 5 < a <= 10)
             (11.0, if 10 < a <= 50)
   
Write a program that prompts the user to enter the amount of the loan and displays
the rate of interest. If the amount is less than $10,000 or more than $50,00,000,
display a message “Loan cannot be provided.”
 */

/* 
 * File:   Exercise11_03.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on August 14, 2018, 8:12 AM
 */

#include <iostream>   // For  cout & cin functions

using namespace std;

int main() {
    // Prompt the user to  enter the amount of the loan
    cout << "Enter the amount of the loan: ";
    double loanAmount;
    
    cin >> loanAmount;   // Receive value
    
    // Calculate the rate of interest  and display the result
    if(loanAmount < 1E4 || loanAmount > 5E6)
        cout << "Loan cannot be provided.";
    
    else if(loanAmount <= 1E5)
        cout << "Rate of interest is " << loanAmount * 0.15;
    
    else if(loanAmount <= 5E5)
        cout << "Rate of interest is " << loanAmount * 0.135;
    
    else if(loanAmount <= 1E6)
        cout << "Rate of interest is " << loanAmount * 0.125;
    
    else if(loanAmount <= 5E6)
        cout << "Rate of interest is " << loanAmount * 0.11;
    
    return 0;
}

