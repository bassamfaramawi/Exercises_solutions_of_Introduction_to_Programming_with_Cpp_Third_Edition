/*
 3.2 (Check numbers) Write a program that prompts the user to enter two integers 
 * and checks whether the first number is divisible by the second.
 */

/* 
 * File:   Exercise02_03.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on August 11, 2018, 3:24 AM
 */

#include <iostream>      // for cin & cout functions

using namespace std;

int main() {
    cout << "Enter two integers: ";   // Prompt the user to enter tow integers
    int num1, num2;
    
    cin >> num1 >> num2;
    
    // Check if divisible and display the result
    cout << num1 << " is " << (num1 % num2 == 0 ? "" : "not ") 
            << "divisible by " << num2;

    return 0;
}

