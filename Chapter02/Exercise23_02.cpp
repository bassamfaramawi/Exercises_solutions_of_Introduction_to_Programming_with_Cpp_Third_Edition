/*
 * *2.21 (Financial application: calculate future investment value) Write a 
    program that reads in investment amount, annual interest rate, and number of 
    years, and displays the future investment value using the following formula:
       futureInvestmentValue = 
       investmentAmount * (1 + monthlyInterestRate)^numberOfYears*12
    For example, if you enter amount 1000, annual interest rate 3.25%, and number
    of years 1, the future investment value is 1032.98.
 */

/* 
 * File:   Exercise23_02.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on March 25, 2018, 12:33 PM
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    double investmentAmount, monthlyInterestRate, numberOfYears, 
            futureInvestmentValue;
    
    // Asking for entering inputs
    cout << "Enter investment amount: ";
    cin >> investmentAmount;
    
    cout << "Enter annual interest rate in percentage: ";
    cin >> monthlyInterestRate ;
    monthlyInterestRate /= 1200;
    
    cout << "Enter number of years: ";
    cin >> numberOfYears;
    
    // Calculate the values
    futureInvestmentValue = investmentAmount * pow(1 + monthlyInterestRate, 
            numberOfYears * 12);
        
    // Display the result
    cout << "Accumulated value is $" << (int)(futureInvestmentValue * 100) / 100.0;

    return 0;
}

