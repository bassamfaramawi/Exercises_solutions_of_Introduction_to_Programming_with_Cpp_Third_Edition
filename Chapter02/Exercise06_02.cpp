/*
 ***2.6 (Sum the digits in an integer) Write a program that reads an integer 
     between 0 and 1000 and adds all the digits in the integer. For example, 
     if an integer is 932, the sum of all its digits is 14.
     Hint: Use the % operator to extract digits, and use the / operator to 
     remove the extracted digit. For instance, 932 % 10 = 2 and 932 / 10 = 93.
 */

/* 
 * File:   Exercise06_02.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on March 19, 2018, 11:57 PM
 */

#include <iostream>   // For  cout & cin functions

using namespace std;

int main() {
    int number, hundreds, tens, ones;
    
    // Asking for entering input
    cout << "Enter a number between 0 and 1000: ";
    cin >> number;
    
    // Compute the values
    hundreds = number / 100;
    tens = number % 100 / 10;
    ones = number % 10;
    
    //Print the result
    cout << "The sum of the digits is " << hundreds + tens + ones;

    return 0;
}

