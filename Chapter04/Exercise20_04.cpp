/*
 *4.20 (Days of a month) Write a program that prompts the user to enter a year and 
the first three letters of a month name (with the first letter in uppercase) and 
displays the number of days in the month.
 */

/* 
 * File:   Exercise20_04.cpp
 * Author: Administrator
 *
 * Created on September 12, 2018, 12:26 PM
 */

#include <iostream> // For cin & cout functions

using namespace std;

int main() {
    // Prompt the user to enter a year
        cout << "Enter a year: ";
        int year;
        cin >> year;
        
        // Prompt the user to enter a month
        cout << "Enter a month: ";
        string month;
        cin >> month;
        
        // Determine if a the year is leap or not 
        bool leapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        
        // Display the results
        cout << month << " " << year << " has ";
        if(month == "Jan" || month == "Mar" || month == "May" || month == "Jul" 
                || month == "Aug" || month == "Oct" || month == "Dec")
            cout << "31 days";
            
        else if (month == "Apr" || month == "Jun" || month == "Sep" || month == "Nov")
            cout << "30 days";
                          
        else if (month == "Feb")
            cout << (leapYear ? "29" : "28") << " days";

    return 0;
}

