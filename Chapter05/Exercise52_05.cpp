/*
  *5.52 (Process string) Write a program that prompts the user to enter a string 
and displays the characters at odd positions.
 */

/* 
 * File:   Exercise52_05.cpp
 * Author: Administrator
 *
 * Created on October 10, 2018, 2:42 PM
 */

#include <iostream> // For the cin & cout functions

using namespace std;

int main() {
    //Prompt the user to enter a string
    cout << "Enter a string: ";
    string str;
    getline(cin, str);
    
    for(int i = 0; i < str.length(); i++)
        if(i % 2 != 0)
            cout << str.at(i);
        else
            cout << "";
       
    return 0;
}

