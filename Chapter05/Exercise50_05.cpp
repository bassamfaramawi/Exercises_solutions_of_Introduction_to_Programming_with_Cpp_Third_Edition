/*
*5.46 (Reverse a string) Write a program that prompts the user to enter a string 
and displays the string in reverse order.
 */

/* 
 * File:   Exercise50_05.cpp
 * Author: Administrator
 *
 * Created on October 10, 2018, 10:30 AM
 */

#include <iostream> // For the cin & cout functions

using namespace std;

int main() {
    //Prompt the user to enter a string
    cout << "Enter a string: ";
    string s;
    cin >> s;
    
    cout << "The reversed string is ";
    
    for(int i = s.length(); i > 0; i--)
        cout << s.at(i-1);

    return 0;
}

