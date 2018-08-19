/*
 * *2.8 (Current time) Listing 2.7, ShowCurrentTime.java, gives a program that 
      displays the current time in GMT. Revise the program so that it prompts 
      the user to enter the time zone offset to GMT and displays the time in the 
      specified time zone.
 */

/* 
 * File:   Exercise08_02.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on March 25, 2018, 12:27 AM
 */

#include <iostream>
#include <ctime>

using namespace std;

int main() {
    
    double GMT_Offset;
    
    // Asking for entering input
    cout << "Enter the time zone offset to GMT: ";
    cin >> GMT_Offset;
    
    // Compute the values
    int totalseconds = time(0) + GMT_Offset * 3600,
            hours = totalseconds / 3600 % 24 ,
            minutes = totalseconds / 60 % 60,
            seconds = totalseconds % 60;
    
    // Print the current time
    cout << "The current time is " << hours << ":" << minutes << ":" << seconds;

    return 0;
}

