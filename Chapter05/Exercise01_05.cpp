/*
 *5.1 (Count positive and negative numbers and compute the average of numbers) Write
a program that reads an unspecified number of integers, determines how many
positive and negative values have been read, and computes the total and average of
the input values (not counting zeros). Your program ends with the input 0. Display
the average as a floating-point number.
 */

/* 
 * File:   Exercise01_05.cpp
 * Author: Administrator
 *
 * Created on September 24, 2018, 10:44 AM
 */

#include <iostream> // For cin & cout functions

using namespace std;

int main() {
    //Prompt the user to enter integers
    cout << "Enter an integer, the input ends if it is 0: ";
    int number;
    cin >> number;    // Receive integer
    
    int n = 0,  // Number of entered integer
            positives = 0, // Initialize positive integers
            negatives = 0;  // Initialize negative integers
    
    double total = 0;  // Initialize total
    
    // Receive integers until the input 0
    while(number != 0) {
        n++;
        if(number > 0) positives++; else negatives++;
        total = total + number;
        cin >> number;
    }
    
    if(n == 0)  // If no entered but zero
        cout << "No numbers are entered except 0";
    
    else  // Otherwise display the result
        cout << "The number of positives is " << positives << endl <<
                "The number of negatives is " << negatives << endl <<
                "The total is " << total << endl <<
                "The average is " << (total / n);    

    return 0;
}

