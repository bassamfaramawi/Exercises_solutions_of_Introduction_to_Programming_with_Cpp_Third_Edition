/*
 * *2.7 (Find the number of years) Write a program that prompts the user to 
    enter the minutes (e.g., 1 billion), and displays the number of years and 
    days for the minutes. For simplicity, assume a year has 365 days
 */

/* 
 * File:   Exercise07_02.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on March 25, 2018, 12:15 AM
 */

#include <iostream>

using namespace std;

int main() {

    long minutes, years, days;
    
    // Asking for entering input
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    
    // Compute the values
    years = minutes / 60 / 24 / 365;
    days = minutes % (60 * 24 * 365) / (60 * 24);
    
    // Print the results
    cout << minutes << " minutes is approximately " << years << " years and ";
    cout << days << " days"<< endl;
    
    return 0;
}

