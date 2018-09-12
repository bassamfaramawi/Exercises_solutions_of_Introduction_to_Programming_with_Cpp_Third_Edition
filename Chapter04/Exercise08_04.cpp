/*
 *4.8 (Find the character of an ASCII code) Write a program that receives an 
ASCII code (an integer between 0 and 127) and displays its character.
 */

/* 
 * File:   Exercise08_04.cpp
 * Author: Administrator
 *
 * Created on September 10, 2018, 9:47 AM
 */

#include <iostream> // For cin & cout functions

using namespace std;

int main() {
    // Prompt the user to enter an ASCII code
    cout << "Enter an ASCII code: ";
    int ascii;
    cin >> ascii;
    
    // Display the result
    cout << "The character for ASCII code " << ascii << " is " << (char)ascii;

    return 0;
}