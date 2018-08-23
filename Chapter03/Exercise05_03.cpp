/*
 *3.5 (Find future dates) Write a program that prompts the user to enter an 
integer fo today’s day of the week (Sunday is 0, Monday is 1, …, and Saturday 
is 6). Also prompt the user to enter the number of days after today for a future 
day and display the future day of the week.
 */

/* 
 * File:   Exercise05_03.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on August 13, 2018, 1:46 AM
 */

#include <iostream>      // for cin & cout functions

using namespace std;

int main() {
    //Prompt the user to enter today's day
    cout << "Enter today's day: ";
    int today;
    
    cin >> today;   // Receive value
        
    if(today >= 0 && today < 7){
        //Prompt the user to enter the number of days elapsed since today
        cout << "Enter the number of days elapsed since today: "; 
        int elapsed;
        
        cin >> elapsed;    // Receive value
            
        switch(today)  {
            case 1: cout << "Today is Sunday";
                    break;
            case 2: cout << "Today is Monday";
                    break;
            case 3: cout << "Today is Tuesday";
                    break;
            case 4: cout << "Today is Wednesday";
                    break;
            case 5: cout << "Today is Thursday";
                    break;
            case 6: cout << "Today is Friday";
                    break;
            case 7: cout << "Today is Saturday";
                    break;
        }
        
        
        //Compute the future day
        int future = (today + elapsed) % 7;
        switch(future)  {
            case 1: cout << " and the future day is Sunday";
                    break;
            case 2: cout << " and the future day is Monday";
                    break;
            case 3: cout << " and the future day is Tuesday";
                    break;
            case 4: cout << " and the future day is Wednesday";
                    break;
            case 5: cout << " and the future day is Thursday";
                    break;
            case 6: cout << " and the future day is Friday";
                    break;
            case 7: cout << " and the future day is Saturday";
                    break;
        }
    }
    else  
        cout << "Invalid day number";
    
    return 0;
}

