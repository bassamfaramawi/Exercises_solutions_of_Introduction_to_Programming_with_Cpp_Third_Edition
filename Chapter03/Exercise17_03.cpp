/*
 *3.17 (Sum the digits in an integer) Programming Exercise 2.6 prompts the user 
 *     to enter an integer between 0 and 1000, and displays the sum of all digits 
 *     in the integer. Write a program that prompts the user to enter a three-digit 
 *     integer. The program displays the sum of all digits in the integer if the 
 *     input is valid; otherwise, it displays a message indicating that the integer 
 *     is not a three-digit number and hence, is invalid.
 */

/* 
 * File:   Exercise17_03.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on August 21, 2018, 11:48 PM
 */

#include <iostream>   // For  cout & cin functions

using namespace std;

int main() {
    int number, hundreds, tens, ones;
    
    // Asking for entering input
    cout << "Enter a three-digit integer: ";
    cin >> number;
    
    if(number > 99 && number < 1000) {   // If a 3-digit integers
        // Compute the values
        hundreds = number / 100;
        tens = number % 100 / 10;
        ones = number % 10;
        
        //Print the result
        cout << "The sum of the digits is " << hundreds + tens + ones;
    }
    
    // Otherwise is invalid input
    else cout << "The integer is not a three-digit number.";  


    return 0;
}

