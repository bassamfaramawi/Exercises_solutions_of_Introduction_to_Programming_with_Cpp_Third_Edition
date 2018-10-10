/*
 **5.57 (Check Student ID) Some colleges impose certain rules for Student ID. 
Suppose the Student ID rules are as follows:
n A Student ID must have exactly ten characters.
n A Student ID must consist of only digits and letters.
n A Student ID must always start with a digit.
Write a program that prompts the student to enter a Student ID and displays valid
Student ID if the rules are followed or invalid Student ID otherwise.
 */

/* 
 * File:   Exercise57_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on October 11, 2018, 2:25 AM
 */

#include <iostream> // For the cin & cout functions
#include <string>  // For string function

using namespace std;

int main() {
    // Prompt the user to enter a Student ID
    cout << "Enter the Student ID: ";
    string studentID;
    cin >> studentID;
    
    bool istenCharacters = studentID.length() == 10;// Check if 10 characters ID
    bool isStartDigit = isdigit(studentID.at(0));  // Check if start by a digit
    bool isOnlyDigitsLetters = true;  // Initialize it to true
    
    // A loop to check if the ID contain non digit or non letter characters
    for(int n = 0; n < studentID.length(); n++)  
        if(!isdigit(studentID.at(n)) && !isalpha(studentID.at(n))) {
            isOnlyDigitsLetters = false;
            break;
        }
    
    // Display the result
    cout << (istenCharacters && isOnlyDigitsLetters && isStartDigit ? 
        "Valid Student ID" : "Invalid Student ID");

    return 0;
}

