/*
 **5.31 (Display calendars) Write a program that prompts the user to enter the 
 year and first day of the year and displays the calendar table for the year on 
 the console. For example, if the user entered the year 2013, and 2 for Tuesday, 
 January 1, 2013, your program should display the calendar for each month in the 
 year, as follows:

                       January 2013
          _________________________________________
          Sun    Mon   Tue   Wed   Thu    Fri   Sat
                 1     2     3     4      5  
          6      7     8     9     10     11    12
          13     14    15    16    17     18    19
          20     21    22    23    24     25    26
          27     28    29    30    31
 */

/* 
 * File:   Exercise31_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on October 2, 2018, 12:21 AM
 */

#include <iostream> // For the cin & cout functions
#include <iomanip>  // For stream manipulators
#include <string>  // For string function

using namespace std;

int main() {
    //Prompt the user to a year
    cout << "Enter a year: ";
    int year;
    cin >> year;
    
    // Prompt the user to enter the first day of year
    cout << "Enter first day of the year (0 for Sunday, .. , 6 for Saturday): ";
    int firstDay;
    cin >> firstDay;
    
    string monthName = "";  // Initialize month name
    int monthDays = 0;  // Initialize the number of month days
    
    for(int n = 1; n <= 12; n++) {
        switch(n)  {
            case 1: monthName = "January";
                    monthDays = 31;
                    break;
            case 2: monthName = "February";
                    monthDays = (year % 400 == 0 
                            || (year % 4 == 0 
                            && year % 100 != 0) 
                            ? 29 : 28);
                    break;
            case 3: monthName = "March";
                    monthDays = 31;
                    break;
            case 5: monthName = "May";
                    monthDays = 31;
                    break;
            case 7: monthName = "July";
                    monthDays = 31;
                    break;
            case 8: monthName = "August";
                    monthDays = 31;
                    break;
            case 10: monthName = "October";
                     monthDays = 31;
                     break;
            case 12: monthName = "December";
                     monthDays = 31;
                     break;
            case 4: monthName = "April";
                    monthDays = 30;
                    break;
            case 6: monthName = "June";
                    monthDays = 30;
                    break;
            case 9: monthName = "September";
                    monthDays = 30;
                    break;
            case 11: monthName = "November";
                    monthDays = 30;
        }
        
        // Print the header
        cout << "\n\n\n                 " << monthName << " " << year 
                << "\n____________________________________________________\n"
                << left << setw(8) << "Sun" << setw(8) << "Mon" << setw(8) 
                << "Tue" << setw(8) << "Wed" << setw(8) << "Thu" << setw(8) 
                << "Fri" << setw(8) << "Sat" << endl;
        
        for(int i = 0; i < firstDay; i++)
            cout << setw(8) << "";
        
        // Print the body of the month
        for(int i = 1; i <= monthDays; i++)
            cout << left << setw(8) << i << ((i + firstDay) % 7 == 0 ? "\n": "");
        
        
        // Shift to the first day of the next month
        firstDay = (firstDay + monthDays) % 7; 
    }

    return 0;
}

