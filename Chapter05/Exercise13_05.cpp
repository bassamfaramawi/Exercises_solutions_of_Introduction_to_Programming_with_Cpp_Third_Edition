/*
 5.13 (Find numbers divisible by 3 or 6, but not both) Write a program that 
 displays all the numbers from 300 to 400, 5 per line, that are divisible by 
 3 or 6, but not both. Numbers are separated by exactly one space.
 */

/* 
 * File:   Exercise13_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on September 29, 2018, 4:07 PM
 */

#include <iostream> // For the cin & cout functions

using namespace std;

int main() {
    const int NUMBERS_PER_LINE = 5; // Constant numbers per line
    const int START_NUMBER = 300; // From the number
    const int END_NUMBER = 400; // To the number
    int count = 0;  // The count of numbers divisible by 3 & 6
    
    cout << "The numbers divisible by 3 or 6 but not both from " << START_NUMBER 
            << " to " << END_NUMBER << " are:" << endl;
    
    for(int n = START_NUMBER; n <= END_NUMBER; n++)
        if(n % 3 == 0 ^ n % 6 == 0) {
            count++;
            // Display 5 number per line
            cout << n << " " << (count % NUMBERS_PER_LINE == 0 ? "\n" : "");
        }

    return 0;
}

