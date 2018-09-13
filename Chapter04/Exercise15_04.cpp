/*
 *4.15 (Phone key pads) The international standard letter/number mapping found on 
the telephone is shown below:
Write a program that prompts the user to enter a letter and displays its corresponding
number.
 */

/* 
 * File:   Exercise15_04.cpp
 * Author: Administrator
 *
 * Created on September 12, 2018, 9:39 AM
 */

#include <iostream> // For cin & cout functions

using namespace std;

int main() {
    // Prompt the user to enter a letter
    cout << "Enter a letter: ";
    char letter;
    cin >> letter;
    
    letter = toupper(letter);  //  Change case to uppercase
    
    // Display the results
    switch(letter) {
        case 'A': 
        case 'B': 
        case 'C': cout << "The corresponding number is " << 2;
                  break;
        case 'D': 
        case 'E': 
        case 'F': cout << "The corresponding number is " + 3;
                  break;
        case 'G': 
        case 'H': 
        case 'I': cout << "The corresponding number is " + 4;
                  break;
        case 'J': 
        case 'K': 
        case 'L': cout << "The corresponding number is " + 5;
                  break;
        case 'M': 
        case 'N': 
        case 'O': cout << "The corresponding number is " + 6;
                  break;
        case 'P':
        case 'Q': 
        case 'R': 
        case 'S': cout << "The corresponding number is " + 7;
                  break;
        case 'T': 
        case 'U': 
        case 'V': cout << "The corresponding number is " + 8;
                  break;
        case 'W':
        case 'X': 
        case 'Y': 
        case 'Z': cout << "The corresponding number is " + 9;
                  break;
        // Otherwise the letter is invalid          
        default: cout << letter << " is an invalid input";
        }

    return 0;
}

