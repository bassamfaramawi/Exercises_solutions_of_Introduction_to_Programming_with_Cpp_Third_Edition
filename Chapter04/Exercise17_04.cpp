/*
4.17 (Palindrome string) Write a program that prompts the user to enter a string 
 with five lowercase letters and determines whether it is a palindrome.
 */

/* 
 * File:   Exercise17_04.cpp
 * Author: Administrator
 *
 * Created on September 12, 2018, 9:59 AM
 */

#include <iostream> // For cin & cout functions
#include <string>   // For string function

using namespace std;

int main() {
    // Prompt the user  to enter a five lowercase letters string
    cout << "Enter a five lowercase letters string: ";
    string input;
    cin >> input;
    
    // Check and display the result
    cout << "The string " << input << " is " << (input.at(0) == input.at(4) 
            && input.at(1) == input.at(3) ? "a palindrome" : "not a palindrome");

    return 0;
}

