/*
 * **2.13 (Financial application: compound value) Suppose you save $100 each 
       month into a savings account with the annual interest rate 5%. Thus, the 
       monthly interest rate is 0.05/12 = 0.00417. After the first month, the 
       value in the account becomes
           100 * (1 + 0.00417) = 100.417
       After the second month, the value in the account becomes
           (100 + 100.417) * (1 + 0.00417) = 201.252
       After the third month, the value in the account becomes
           (100 + 201.252) * (1 + 0.00417) = 302.507
       and so on.
    Write a program that prompts the user to enter a monthly saving amount and
    displays the account value after the sixth month. (In Exercise 5.30, you will
    use a loop to simplify the code and display the account value for any month.)
 */

/* 
 * File:   Exercise13_02.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on March 25, 2018, 2:30 AM
 */

#include <iostream>

using namespace std;

int main() {
    
    double monthlyAmount, accountValue = 0;
    
    // Asking for entering inputs
    cout << "Enter the monthly saving amount: ";
    cin >> monthlyAmount;
    
    // Calculate and the values
    accountValue = (accountValue + monthlyAmount) * 1.00417;
    accountValue = (accountValue + monthlyAmount) * 1.00417;
    accountValue = (accountValue + monthlyAmount) * 1.00417;
    accountValue = (accountValue + monthlyAmount) * 1.00417;
    accountValue = (accountValue + monthlyAmount) * 1.00417;
    accountValue = (accountValue + monthlyAmount) * 1.00417;

    // Display the result
    cout << "After the sixth month, the account value is $";
    cout << (int)(accountValue * 100) / 100.0  << endl;
    return 0;
}

