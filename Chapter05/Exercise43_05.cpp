/*
 *5.43 (Simulation: clock countdown) Write a program that prompts the user to 
enter the number of seconds, displays a message at every second, and terminates 
when the time expires.
 */

/* 
 * File:   Exercise43_05.cpp
 * Author: Administrator
 *
 * Created on October 9, 2018, 11:05 AM
 */

#include <iostream> // For the cin & cout functions
#include <ctime>  // For time function

using namespace std;

int main() {
    // Prompt the user to enter the number  of seconds
    cout << "Enter the number of seconds: ";
    int numberOfSeconds;
    cin >> numberOfSeconds;
    
    // Calculate the time after the number of seconds
    int timeExpiration = time(0) + numberOfSeconds;  
    numberOfSeconds--;
    
    // Use while loop to count seconds
    while(time(0) < timeExpiration) {
        if(time(0) == timeExpiration - numberOfSeconds) {
            if(numberOfSeconds > 0)
                cout << numberOfSeconds << " seconds remaining" << endl;
            else 
                break;
            numberOfSeconds--;
        }
    }
    
    cout << "Stopped";  // Finish the counting
    
    return 0;
}

