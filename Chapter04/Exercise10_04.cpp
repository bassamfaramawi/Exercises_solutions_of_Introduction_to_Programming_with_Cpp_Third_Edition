/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercise10_04.cpp
 * Author: Administrator
 *
 * Created on September 11, 2018, 1:51 PM
 */

#include <iostream> // For cin & cout functions
#include <string> // For string function

using namespace std;

int main(int argc, char** argv) {
    // Prompt the user to enter a string
    cout << "Enter a letter: ";
    string input;
    cin >> input;
    
    char letter = tolower(input.at(0));
    
    // The input is invalid if its length > 1 or not a string
    if(input.length() > 1 || !isalpha(letter)) 
        cout << input << " is an invalid input";
    
    // Otherwise display if vowel or consonant
    else {
        cout << input << " is a " << ((letter == 'a' || letter == 'e' || 
                letter == 'i' || letter == 'o' || letter == 'u') 
                ? "vowel" : "consonant");
    }

    return 0;
}

