/*
 *3.9 (Display the day and remaining hours) Write a program that prompts the user 
      to enter the day number of a week and hours passed, and displays the day 
      and remaining hours. For example, if the user entered day number 1 and hours 
      passed 20, the program should display Today is Sunday and Remaining Hours: 4. 
      If the user entered day number 7 and hours passed 2, the program should display 
      Today is Saturday and Remaining Hours 22.
 */

/* 
 * File:   Exercise09_03.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on August 13, 2018, 6:08 PM
 */

#include <iostream>      // For cin & cout functions

using namespace std;

int main() {
    // Prompt the user to enter the day number of a week and hours passed
    cout << "Enter the day number of a week and hours passed: ";
    int day, hours;
    
    cin >> day >> hours;   // Receive values
    
    const int DAY_HOURS = 24;  // The day hours is 24
    
    cout << "Today is ";
    
    // Detect weekday and display the result
    switch(day) {
        case 1: cout << "Sunday";
                break;
        case 2: cout << "Monday";
                break;
        case 3: cout << "Tuesday";
                break;
        case 4: cout << "Wednesday";
                break;
        case 5: cout << "Thursday";
                break;
        case 6: cout << "Friday";
                break;
        case 7: cout << "Saturday";
    }
    
    // Compute the remaining hours and display the result
    cout << " and Remaining Hours " << DAY_HOURS - hours;

    return 0;
}

