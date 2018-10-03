/*
 **5.24 (Financial application: loan amortization schedule) The monthly payment 
 for a given loan pays the principal and the interest. The monthly interest is 
 computed by multiplying the monthly interest rate and the balance (the remaining 
 principal). The principal paid for the month is therefore the monthly payment 
 minus the monthly interest. Write a program that lets the user enter the loan 
 amount, number of years, and interest rate and displays the amortization schedule 
 for the loan.
 */

/* 
 * File:   Exercise24_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on October 1, 2018, 3:37 PM
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
    
    // Let the user enter annual interest rate
    cout << "Annual Interest Rate: ";
    double annualInterestRate;
    cin >> annualInterestRate;
            
    // The monthly interest rate
    double monthlyInterestRate = annualInterestRate / 1200;
            
    // The monthly payment
    double monthlyPayment = loanAmount * monthlyInterestRate / (1 - 1 / 
               pow(1 + monthlyInterestRate, numberOfYears * 12));
            
    // The total payment
    double totalPayment = monthlyPayment * numberOfYears * 12; 
    
    // Display the monthly payment and the total payment
    cout << "Monthly Payment: " << fixed << setprecision(2) << monthlyPayment 
            << endl << "Total Payment: " << totalPayment << endl;
    
    double balance = loanAmount,
            interest,
            principal;
    
    // Print the header
    cout << left << setw(15) << "Payment#" << setw(15) << "Interest" << setw(15) 
            << "Principal" << setw(15) << "Balance" << endl;
    
    // Loop for printing the table body
    for (int n = 1; n <= numberOfYears * 12; n++) {
        interest = monthlyInterestRate * balance;
        principal = monthlyPayment - interest;
        balance = balance - principal;
        
        // Display the results
        cout << left << setw(15) << n << fixed << setprecision(2) << setw(15) << 
                interest << setw(15) << principal << setw(15) << balance << endl;
    }

    return 0;
}

