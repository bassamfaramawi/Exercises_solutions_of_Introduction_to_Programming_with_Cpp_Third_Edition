/*
 **5.38 (Palindrome number) Write a program that prompts the user to enter an 
 integer and uses loops to simplify Programming Exercise 3.36.
 */

/* 
 * File:   Exercise38_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on October 4, 2018, 9:52 PM
 */

#include <iostream>  // For cin & cout functions

using namespace std;

int main() {
    //Prompt the user to enter a three-digit integer
    cout << "Enter a three-digit integer: ";
    int number;
    cin >> number;  // Receive value
    
    int originalInteger = number,  // Initialize original integer
            reversedInteger = 0,  // Initialize reversed integer
            remainder;
    
    // Use loop to extract reversed integer
    while(number != 0) {
        remainder = number % 10;
        reversedInteger = reversedInteger * 10 + remainder;
        number /= 10;
    }
    
    // check if original equal reversed and display the result
    cout << originalInteger << " is " << (originalInteger == reversedInteger ? 
        "" : "not") << " a palindrome";

    return 0;
}

