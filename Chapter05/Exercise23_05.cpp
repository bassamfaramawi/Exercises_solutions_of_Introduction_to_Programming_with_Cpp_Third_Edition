/*
**5.23 (Financial application: compare loans with various interest rates) Write 
 a program that lets the user enter the loan amount and loan period in number of 
 years and displays the monthly and total payments for each interest rate starting 
 from 5% to 8%, with an increment of 1/8.
 */

/* 
 * File:   Exercise23_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on October 1, 2018, 2:57 PM
 */

#include <iostream> // For the cin & cout functions
#include <iomanip>  // For stream manipulators
#include <cmath>  // For math functions

using namespace std;

int main() {
    // Let the user enter loan amount
    cout << "Loan Amount: ";
    double loanAmount;
    cin >> loanAmount;
    
    // Let the user enter loan amount
    cout << "Number of Years: ";
    int numberOfYears;
    cin >> numberOfYears;
    
    double interestRate = 5,  // Initialize interest rate from 5%
            annualInterestRate, // The annual interest rate
            monthlyInterestRate, // The monthly interest rate
            monthlyPayment, // The monthly payment
            totalPayment,  // The total payment
            increment = 0.125; // The increment
    
    int count = (int)((8 - 5) / 0.125);  // The loop count number
    
    // Print the header
    cout << left << setw(17) << "Interest Rate" <<  setw(17) 
            << "Monthly Payment" << setw(17) << "Total Payment" << endl;
    
    for(int n = 0; n <= count; n++) {  // Loop for printing the table body
       annualInterestRate = interestRate + n * increment;
       monthlyInterestRate = annualInterestRate / 1200;
       monthlyPayment = loanAmount * monthlyInterestRate / (1 - 1 / 
               pow(1 + monthlyInterestRate, numberOfYears * 12));
       totalPayment = monthlyPayment * numberOfYears * 12;
       
       // Display the result
       cout << fixed << left << setprecision(3) << annualInterestRate << setw(12) 
               << "%" << fixed << setprecision(2) << setw(17) << monthlyPayment 
               << setw(17) << totalPayment << endl;
    }
    
    return 0;
}

