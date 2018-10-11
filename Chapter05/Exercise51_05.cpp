/*
 *5.51 (Business: check ISBN-13) ISBN-13 is a new standard for indentifying books. 
It uses 13 digits d1d2d3d4d5d6d7d8d9d10d11d12d13. The last digit d13 is a checksum,
which is calculated from the other digits using the following formula:
  10 - (d1 + 3d2 + d3 + 3d4 + d5 + 3d6 + d7 + 3d8 + d9 + 3d10 + d11 + 3d12)%10

If the checksum is 10, replace it with 0. Your program should read the input as a
string.
 */

/* 
 * File:   Exercise51_05.cpp
 * Author: Administrator
 *
 * Created on October 10, 2018, 2:34 PM
 */

#include <iostream> // For the cin & cout functions

using namespace std;

int main() {
    //Prompt the user to enter the first 12 digits of an ISBN-13 as a string
    cout << "Enter the first 12 digits of an ISBN-13 as a string: ";
    string digits;
    cin >> digits;
    
    if(digits.length() != 12){  // If the length != 12 exit the program
        cout << digits << " is an invalid input";
        return 0;
    }
    
    // Compute the checksum
    int ISBN_13 = 10 - (digits.at(0) - '0'
            + 3 * (digits.at(1) - '0')
            + digits.at(2) - '0'
            + 3 * (digits.at(3) - '0')
            + digits.at(4) - '0'
            + 3 * (digits.at(5) - '0')
            + digits.at(6) - '0'
            + 3 * (digits.at(7) - '0')
            + digits.at(8) - '0'
            + 3 * (digits.at(9) - '0')
            + digits.at(10) - '0'
            + 3 * (digits.at(11) - '0')) % 10;
    
    ISBN_13 = (ISBN_13 == 10 ? 0 : ISBN_13);  // If checksum = 10 set it 0
    
    // Display the result
    cout << "The ISBN-13 number is " << digits << ISBN_13;

    return 0;
}

