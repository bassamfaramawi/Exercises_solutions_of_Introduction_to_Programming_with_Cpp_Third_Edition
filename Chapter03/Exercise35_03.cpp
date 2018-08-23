/*
  **3.35 (Business: check ISBN-10) An ISBN-10 (International Standard Book Number)
consists of 10 digits: d1d2d3d4d5d6d7d8d9d10. The last digit, d10, is a checksum,
which is calculated from the other nine digits using the following formula:
     (d1 * 1 + d2 * 2 + d3 * 3 + d4 * 4 + d5 * 5 +
      d6 * 6 + d7 * 7 + d8 * 8 + d9 * 9) % 11
If the checksum is 10, the last digit is denoted as X according to the ISBN-10
convention. Write a program that prompts the user to enter the first 9 digits and
displays the 10-digit ISBN (including leading zeros). Your program should read
the input as an integer
 */

/* 
 * File:   Exercise35_03.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on August 23, 2018, 8:38 PM
 */

#include <iostream>  // For cin & cout functions

using namespace std;

int main() {
    //Prompt the user to enter first 9 digits as 1 integer number
    cout << "Enter the first 9 digits of an ISBN as integer: ";
    // Receive value
    int digits;
    
    cin >> digits;  // Receive value
    
    // Split digits
    int d1 = (int)(digits / 1E8);
    int remaining = digits % 100000000;
            
    int d2 = (int)(remaining /  1E7);
    remaining = digits % 10000000;
    
    int d3 = (int)(remaining /  1E6);
    remaining = digits % 1000000;
    
    int d4 = (int)(remaining /  1E5);
    remaining = digits % 100000;
    
    int d5 = (int)(remaining /  1E4);
    remaining = digits % 10000;
    
    int d6 = (int)(remaining /  1E3);
    remaining = digits % 1000;
    
    int d7 = (int)(remaining /  1E2);
    remaining = digits % 100;
    
    int d8 = (int)(remaining /  1E1);
    remaining = digits % 10;
    
    int d9 = (int)remaining;
    
    // Compute d10 checksum
    int d10 = (d1 * 1 + d2 * 2 + d3 * 3 + d4 * 4 + d5 * 5 +
            d6 * 6 + d7 * 7 + d8 * 8 + d9 * 9) % 11;
    
    // Display the result
    cout << "The ISBN-10 number is " << digits;
    
    if(d10 == 10) 
        cout << "X";
    else
        cout << d10;

    return 0;
}

