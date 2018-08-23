/*
 **3.33 (Science: day of the week) Zeller’s congruence is an algorithm developed by
Christian Zeller to calculate the day of the week. The formula is
h = (q + 26(m + 1)/10 + k +k/4 +j/4 + 5j) % 7
where
■ h is the day of the week (0: Saturday, 1: Sunday, 2: Monday, 3: Tuesday, 4:
Wednesday, 5: Thursday, 6: Friday).
■ q is the day of the m.
■ m is the m (3: March, 4: April, …, 12: December). January and February
are counted as months 13 and 14 of the previous year.
■ j is the century (i.e.,
year
100
).
■ k is the year of the century (i.e., year % 100).
Note that the division in the formula performs an integer division. Write a program
that prompts the user to enter a year, m, and day of the m, and
displays the name of the day of the week.
 */

/* 
 * File:   Exercise33_03.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on August 23, 2018, 6:46 PM
 */

#include <iostream> // For cin & cout functions

using namespace std;

int main() {
    // Asking for entering year
    cout << "Enter year: (e.g., 2012): ";
    int year;
    
    cin >> year;  // Receive value
    
    // Asking for entering m
    cout << "Enter month: 1-12: ";
    int m;
    
    cin >> m;  // Receive value
    
    // Convert input from 1 to 13 and from 2 to 14
    switch(m) {case 1: m = 13; --year; break;  case 2: m = 14; --year;}
    
    // Asking for entering day of the m
    cout << "Enter the day of the month: 1-31: ";
    int q;        
    
    cin >> q;  // Receive value
    
    int j = year / 100;   // Compute the century
    
    int k = year % 100;   // Compute the year of the century
    
    // Calculate day of the week
    int h = (q + 26 * (m + 1) / 10 + k + k / 4 + j / 4 + 5 * j) % 7;
    
    // Display the result
    cout << "Day of the week is ";
    
    switch(h) {
        case 0: cout << "Saturday";
                break;
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
        }

    return 0;
}

