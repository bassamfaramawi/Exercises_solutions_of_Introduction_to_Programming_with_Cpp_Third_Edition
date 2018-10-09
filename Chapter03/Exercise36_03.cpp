/*
 3.36 (Palindrome number) Write a program that prompts the user to enter a 
three-digit integer and determines whether it is a palindrome number. A number 
is palindrome if it reads the same from right to left and from left to right.
 */

/* 
 * File:   Exercise36_03.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on August 24, 2018, 12:26 AM
 */

#include <iostream>  // For cin & cout functions

using namespace std;

int main() {
    //Prompt the user to enter a three-digit integer
    cout << "Enter a three-digit integer: ";
    int number;
    cin >> number;  // Receive value
    
    // Extract 1st and 3rd digits
    int digit1 = number / 100,
            remaining = number % 100,
            digit3 = remaining % 10;
    
    // check if they are equal and display the result
    cout << number << " is " << (digit1 == digit3 ? "" : "not") << " a palindrome";

    return 0;
}

