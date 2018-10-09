/*
 *5.49 (Longest common prefix) Write a program that prompts the user to enter two
strings and displays the largest common prefix of the two strings.
 */

/* 
 * File:   Exercise49_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on October 10, 2018, 12:04 AM
 */

#include <iostream> // For the cin & cout functions
#include <string>  // For string function

using namespace std;

int main() {
    //Prompt the user to enter the first string:
    cout << "Enter the first string: ";
    string s1;
    getline(cin, s1);
    
    //Prompt the user to enter the second string:
    cout << "Enter the second string: ";
    string s2;
    getline(cin, s2);
    
    string s = "";
    
    string longestCommonPrefix = "";  // Initialize the longest common prefix
    
    int n = 0, 
            i = 0;
    
    while(n < s1.length() || i < s2.length()) {
        for(int k = 0; k < s2.length(); k++)  {
            if(s1.at(n) == s2.at(k)) {
                i = k;
                while(s1.at(n) == s1.at(i)) {
                    longestCommonPrefix += s1.at(n);
                    n++;
                    i++;
                }
                
            }
        }
    }
    
    // If no common prefix between them
    if(longestCommonPrefix.length() <= 1)
        cout << s1 << " and " << s2 << " have no common prefix";
    
    // Otherwise display the longest common prefix
    else
        cout << "The common prefix is " << longestCommonPrefix;

    return 0;
}

