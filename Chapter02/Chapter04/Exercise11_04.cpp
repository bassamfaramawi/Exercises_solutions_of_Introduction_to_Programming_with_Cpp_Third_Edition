/*
 *4.11 (Convert an uppercase letter to lowercase) Write a program that prompts 
 * the user to enter an uppercase letter and converts it to a lowercase letter.
 */

/* 
 * File:   Exercise11_04.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on September 11, 2018, 6:31 PM
 */

#include <iostream> // For cin & cout functions


using namespace std;

int main() {
    // Prompt the user to enter an uppercase letter
    cout << "Enter an uppercase letter: ";
    char upperLetter;
    cin >> upperLetter;
    
    // Check if the character isn't alphabetic
    if(!isalpha(upperLetter))
        cout << "The input is  invalid";
    
    // Otherwise change case
    else {
        // Switch case
        char lowerLetter = tolower(upperLetter);
        
        // Display the result
        cout << "The lowercase is " << lowerLetter << endl;
    }
    
    return 0;
}

