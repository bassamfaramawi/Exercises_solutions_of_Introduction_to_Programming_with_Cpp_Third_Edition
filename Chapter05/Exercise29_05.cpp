/*
**5.29 (Display multiples of 10) Write a program that displays all the multiples 
 of 10, 15 per line, from 4000 to 4500, separated by exactly one space.
 */

/* 
 * File:   Exercise29_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on October 1, 2018, 6:16 PM
 */

#include <iostream> // For the cin & cout functions

using namespace std;

int main() {
    int count = 0;  // Initialize the counting
    
    cout << "The multiples of 10 from 4000 to 4500 are :" << endl;
    
    for(int i = 4000; i <= 4500; i += 10){
        count++;
        cout << i << (count % 15 == 0 ? "\n" : " ");
    }

    return 0;
}

