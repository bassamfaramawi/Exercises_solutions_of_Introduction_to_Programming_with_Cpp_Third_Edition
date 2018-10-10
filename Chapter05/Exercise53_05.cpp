/*
 *5.49 (Count vowels and consonants) Assume letters A, E, I, O, and U as the vowels.
Write a program that prompts the user to enter a string and displays the number
of vowels and consonants in the string.
 */

/* 
 * File:   Exercise53_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on October 10, 2018, 5:13 PM
 */

#include <iostream> // For the cin & cout functions
#include <string>  // For string function

using namespace std;

int main() {
    //Prompt the user to enter a string:
    cout << "Enter a string: ";
    string str;
    getline(cin, str);
    
    for(int n = 0; n < str.length(); n++)
        str.at(n) = toupper(str.at(n));     // Set all the letters to uppercase 
    
    int numberOfVowels = 0,  // Initialize the number of vowels
            numberOfConsonants = 0;  // Initialize the number of consonants
    
    for(int i = 0; i <str.length(); i++)
        if(str.at(i) == 'A' || str.at(i) == 'E' 
                || str.at(i) == 'I' || str.at(i) == 'O' 
                || str.at(i) == 'U')
            numberOfVowels++;
        
        else if(isalpha(str.at(i)))
            numberOfConsonants++;
    
    // Display the result
    cout << "The number of vowels is" << numberOfVowels << endl;
    cout << "The number of consonants is" << numberOfConsonants;

    return 0;
}

