/*
 *4.12 (Convert letter grade to number) Write a program that prompts the user to 
enter a letter grade A, B, C, D, or F and displays its corresponding numeric value 
4, 3, 2, 1, or 0
 */

/* 
 * File:   Exercise12_04.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on September 11, 2018, 11:53 PM
 */

#include <iostream> // For cin & cout functions

using namespace std;

int main() {
    // Prompt the user to enter a letter grade
    cout << "Enter a letter grade: ";
    char letter;
    cin >> letter;
    
    letter = toupper(letter);  // Get the uppercase of character
    
    // Display the results
        switch(letter) {
            case 'A': cout << "The numeric value for grade A is 4";
                      break;
            case 'B': cout << "The numeric value for grade B is 3";
                      break;
            case 'C': cout << "The numeric value for grade C is 2";
                      break;
            case 'D': cout << "The numeric value for grade D is 1";
                      break;
            case 'F': cout << "The numeric value for grade F is 0";
                      break;
            // Otherwise the letter is invalid          
            default: cout << letter << " is an invalid grade";
            }

    return 0;
}

