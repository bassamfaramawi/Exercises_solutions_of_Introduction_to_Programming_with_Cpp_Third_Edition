/*
 *5.32 (Financial application: compound value) Suppose you save $100 each month
into a savings account with the annual interest rate 5%. So, the monthly interest
rate is 0.05 / 12 = 0.00417. After the first month, the value in the account
becomes
100 * (1 + 0.00417) = 100.417
After the second month, the value in the account becomes
(100 + 100.417) * (1 + 0.00417) = 201.252
After the third month, the value in the account becomes
(100 + 201.252) * (1 + 0.00417) = 302.507
and so on.
Write a program that prompts the user to enter an amount (e.g., 100), the annual
interest rate (e.g., 5), and the number of months (e.g., 6) and displays the amount
in the savings account after the given month.
 */

/* 
 * File:   Exercise32_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on October 2, 2018, 12:52 AM
 */

#include <iostream> // For the cin & cout functions
#include <iomanip>  // For stream manipulators

using namespace std;

int main() {
    //Prompt the user to enter an amount
    cout << "Enter an amount: ";
    double amount;
    cin >> amount;
    
    //Prompt the user to enter the annual interest rate
    cout << "Enter the annual interest rate(e.g., 5): ";
    double annualInterestRate;
    cin >> annualInterestRate;
    
    //Prompt the user to enter the number of months
    cout << "Enter the number of months: ";
    int numberOfMonths;
    cin >> numberOfMonths;
    
    // The monthly interest rate
    double monthlyInterestRate = annualInterestRate / 1200;
    
    double monthlyAmount = 0;  // Initialize monthly amount
    
    for(int n = 1; n <= numberOfMonths; n++) 
        monthlyAmount = (monthlyAmount + amount) * (1 + monthlyInterestRate);
    
    // Display the the amount in the savings account after the given month
    cout << "The final amount after " << numberOfMonths << 
            " months: $" << fixed << setprecision(2) << monthlyAmount;

    return 0;
}

