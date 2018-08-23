/*
 *3.27 (Current time) Revise Programming Exercise 2.8 to display the hour using 
 * a 12-hour clock.
 */

/* 
 * File:   Exercise27_03.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on August 22, 2018, 2:13 AM
 */

#include <iostream>  // For cin & cout functions
#include <ctime>  // For time function

using namespace std;

int main() {
    // Asking for entering input
    cout << "Enter the time zone offset to GMT: ";
    int GMT_Offset;
    
    cin >> GMT_Offset;  // Receive the value
    
    // Calculate the values
    long totalSeconds = time(0) + GMT_Offset * 3600,
            hours = ((totalSeconds / 3600) % 24),
            minutes = (totalSeconds %= 3600) / 60,
            seconds = totalSeconds % 60;
    
    // Print the result
    cout << "The current time is " << 
            // Display the hour using a 12-hour clock
            (hours > 12 ? hours - 12 : hours) << ":" << minutes << ":" << seconds;

    return 0;
}

