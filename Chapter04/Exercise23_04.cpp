/*
  *4.23 (Check SSN) Write a program that prompts the user to enter a Social Security
number in the format DDD-DD-DDDD, where D is a digit. Your program should
check whether the input is valid.
 */

/* 
 * File:   Exercise23_04.cpp
 * Author: Administrator
 *
 * Created on September 12, 2018, 1:45 PM
 */

#include <iostream> // For cin & cout functions
#include <string> // For string function

using namespace std;

int main() {
    //Prompt the user to enter a SSN in the format DDD-DD-DDDD
    cout << "Enter a SSN: ";
    string ssn;
    cin >> ssn;
    
    bool isValidLength = ssn.length() == 11;  // Check string length
    
      // Check string digits
    bool isDigits = isdigit(ssn.at(0)) 
            && isdigit(ssn.at(1))
            && isdigit(ssn.at(2))
            && isdigit(ssn.at(4))
            && isdigit(ssn.at(5))
            && isdigit(ssn.at(7))
            && isdigit(ssn.at(8))
            && isdigit(ssn.at(9))
            && isdigit(ssn.at(10));
    
    // Check the format
    bool isValidFormat = isValidLength && isDigits &&
            ssn.at(3) == '-' && ssn.at(6) == '-';
    
    // Display the result
    cout << ssn + " is " << (isValidFormat ? "a valid" : "an invalid") 
            << " social security number";

    return 0;
}

