/*
 4.13 (Hex to binary) Write a program that prompts the user to enter a hex digit 
and displays its corresponding binary number.
 */

/* 
 * File:   Exercise13_04.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on September 12, 2018, 12:28 AM
 */

#include <iostream> // For cin & cout functions
#include <string>  // For string function

using namespace std;

int main() {
    // Prompt the user to enter a hex digit
    cout << "Enter a hex digit: ";
    string inputString;
    cin >> inputString;
    
    char hexDigit = toupper(inputString[0]);
    
    // The input is invalid if it is a digit > 9 or < 0 or is alphabetic > 'F'
    if(inputString.size() > 1 || (isalpha(hexDigit) && hexDigit > 'F'))
        cout << inputString << " is an invalid input";
    
    // Otherwise display the binary form of the hex digit
    else {
         cout << "The binary value is ";
         
         switch(hexDigit) {
            case '0': cout << "0000";
                      break;
            case '1': cout << "0001";
                      break;
            case '2': cout << "0010";
                      break;
            case '3': cout << "0011";
                      break;
            case '4': cout << "0100";
                      break;
            case '5': cout << "0101";
                      break;
            case '6': cout << "0110";
                      break;
            case '7': cout << "0111";
                      break;
            case '8': cout << "1000";
                      break;
            case '9': cout << "1001";
                      break;
            case 'A': cout << "1010";
                      break;
            case 'B': cout << "1011";
                      break;
            case 'C': cout << "1100";
                      break;
            case 'D': cout << "1101";
                      break;
            case 'E': cout << "1110";
                      break;
            case 'F': cout << "1111";
        }
    }

    return 0;
}

