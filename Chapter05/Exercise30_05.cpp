/*
 **5.30 (Display the Sundays in a month) Write a program that prompts the user to 
 enter the month and first day of the month, and displays all the Sundays in that 
 month. For example, if the user entered the month 7 for July, and the first day 
 4 for Wednesday, your program should display the following output:
The first day of this month is Wednesday!
...
Next Sunday of this month is on 26.
 */

/* 
 * File:   Exercise30_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on October 1, 2018, 6:45 PM
 */

#include <iostream> // For the cin & cout functions
#include <string>  // For string function

using namespace std;

int main() {
    //Prompt the user to a month
    cout << "Enter a month(1 for January, 2 for February..) : ";
    int month;
    cin >> month;
    
    // Prompt the user to enter the first day of month
    cout << "Enter first day of the month (0 for Sunday, .. , 6 for Saturday):";
    int firstDay;
    cin >> firstDay;
    
    string dayOfWeek = "";  // Initialize day of week name
    string monthName = "";  // Initialize month name
    int monthDays = 0;  // Initialize the number of month days
    
    switch(month)  {
        case 1: monthDays = 31;
                break;
        case 2: monthDays = 28;
                break;
        case 3: monthDays = 31;
                break;
        case 5: monthDays = 31;
                break;
        case 7: monthDays = 31;
                break;
        case 8: monthDays = 31;
                break;
        case 10: monthDays = 31;
                 break;
        case 12: monthDays = 31;
                 break;
        case 4: monthDays = 30;
                break;
        case 6: monthDays = 30;
                break;
        case 9: monthDays = 30;
                break;
        case 11: monthDays = 30;
    }
        
    switch(firstDay) {
        case 1: dayOfWeek = "Sunday";
                break;
        case 2: dayOfWeek = "Monday";
                break;
        case 3: dayOfWeek = "Tuesday";
                break;
        case 4: dayOfWeek = "Wednesday";
                break;
        case 5: dayOfWeek = "Thursday";
                break;
        case 6: dayOfWeek = "Friday";
                break;
        case 7: dayOfWeek = "Saturday";
    }
        
    cout << "The first day of this month is " << dayOfWeek<< "!" <<endl;
    
    int dayOfMonth = firstDay;  // Initialize the day of month
    
    for(int day = 2; day <= monthDays; day++) {
        dayOfMonth++;
        if(dayOfMonth == 8){
            dayOfMonth = 1;
            cout << "Next Sunday of this month is on " << day << endl;
        }
    }
    
    return 0;
}

