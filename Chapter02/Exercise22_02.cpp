/*
 * *2.20 (Financial application: calculate interest) If you know the balance and 
    the annual percentage interest rate, you can compute the interest on the next 
    monthly payment using the following formula:
        interest = balance * (annualInterestRate/1200)
Write a program that reads the balance and the annual percentage interest rate 
and displays the interest for the next month.
 */

/* 
 * File:   Exercise22_02.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on March 25, 2018, 3:18 AM
 */

#include <iostream>

using namespace std;

int main() {
    
    double balance, interestRate, interest;
    
    // Asking for entering inputs
    cout << "Enter balance and interest rate (e.g., 3 for 3%): ";
    cin >> balance >> interestRate;
            
    // Calculate the values
    interestRate /= 1200;
    interest = balance * interestRate;
        
    // Display the result
    cout << "The interest is " << (int)(interest * 10000) / 10000.0;

    return 0;
}

