/*
  *5.48 (Count uppercase letters) Write a program that prompts the user to enter 
a string and displays the number of the uppercase letters in the string.
 */

/* 
 * File:   Exercise48_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on October 9, 2018, 11:49 PM
 */

#include <iostream> // For the cin & cout functions
#include <string>  // For string function

using namespace std;

int main() {
    //Prompt the user to enter a string
    cout << "Enter a string: ";
    string s;
    getline(cin, s);
    
    int numberOfUppercases = 0;  // Initialize the number of uppercases
    
    for(int i = 0; i < s.length(); i++)
        if(isupper(s.at(i)))
            numberOfUppercases++;
        
    // Display the result
    cout << "The number of uppercase letters is " << numberOfUppercases;

    return 0;
}

