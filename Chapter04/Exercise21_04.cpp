/*
*4.21 (Student major and status) Write a program that prompts the user to enter two
characters and displays the major and status represented in the characters. The first
character indicates the major and the second is number character 1, 2, 3, 4, which
indicates whether a student is a freshman, sophomore, junior, or senior. Suppose
the following characters are used to denote the majors:
M: Mathematics
C: Computer Science
I: Information Technology
 */

/* 
 * File:   Exercise21_04.cpp
 * Author: Administrator
 *
 * Created on September 12, 2018, 1:28 PM
 */

#include <iostream> // For cin & cout functions

using namespace std;

int main() {
    // Prompt the user to enter two characters
    cout << "Enter two characters: ";
    string towCharacters;
    cin >> towCharacters;
    
    // Extract the first and second characters from the input
    char major = toupper(towCharacters.at(0));
    char status = towCharacters.at(1);
    
    // If invalid input
    if(major != 'M' &&  major != 'C' &&  major != 'I')
        cout << "Invalid major code";
    
    else if(status != '1' &&  status != '2' &&  status != '3' && status != '4')
        cout << "Invalid status code";
    
    // Otherwise display the major and status
    else {
        switch(major) {
            case 'M': cout << "Mathematics ";
                      break;
            case 'C': cout << "Computer Science ";
                      break;
            case 'I': cout << "Information Technology ";
        }
        
        switch(status) {
            case '1': cout << "Freshman";
                      break;
            case '2': cout << "Sophomore";
                      break;
            case '3': cout << "Junior";
                      break;
            case '4': cout << "Senior";
        }
    }

    return 0;
}

