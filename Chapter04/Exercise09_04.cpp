/*
 *4.9 (Find the Unicode of a character) Write a program that receives a character 
and displays its Unicode.
 */

/* 
 * File:   Exercise09_04.cpp
 * Author: Administrator
 *
 * Created on September 11, 2018, 10:28 AM
 */

#include <iostream> // For cin & cout functions

using namespace std;

int main() {
    // Prompt the user to enter a character
    cout << "Enter a character: ";
    string character;
    cin >> character;
    
    // Display the result
    cout << "The Unicode for the character " << character << " is " 
            << (int)character.at(0);

    return 0;
}

