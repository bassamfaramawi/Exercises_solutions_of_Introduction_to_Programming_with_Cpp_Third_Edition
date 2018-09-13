/*
 4.16 (Process two string) Write a program that prompts the user to enter two 
 strings and displays the length and the last character of each.
 */

/* 
 * File:   Exercise16_04.cpp
 * Author: Administrator
 *
 * Created on September 12, 2018, 9:47 AM
 */

#include <iostream> // For cin & cout functions.
#include <string>   // For string function

using namespace std;

int main() {
    //Prompt the user to enter the first string
    cout << "Enter the first string: ";
    string string1;
    getline(cin, string1);
    
    
    //Prompt the user to enter the second string
    cout << "Enter the second string: ";
    string string2;
    getline(cin, string2);
    
    // Display  the results
    cout << "The first string length = " << string1.length() << 
            " and last character is " << string1.at(string1.length() -1) << endl;
    
    cout << "The second string length = " << string2.length() << 
            " and last character is " << string2.at(string2.length() -1) << endl;

    return 0;
}

