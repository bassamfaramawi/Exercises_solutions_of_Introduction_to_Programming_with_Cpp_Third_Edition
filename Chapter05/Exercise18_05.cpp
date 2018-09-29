/*
 *5.18 (First five multiples of an integer) Write a program that reads an integer 
 and displays its first five multiples. For example, if the input integer is 10, 
 the output should be as follows: 10, 20, 30, 40, 50.
 */

/* 
 * File:   Exercise18_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on September 29, 2018, 4:41 PM
 */

#include <iostream> // For the cin & cout functions

using namespace std;

int main() {
    //Prompt the user to enter an integer
    cout << "Enter an integer: ";
    int number;
    cin >> number;
    
    int n = 1,  // Start count from after 1
            multiples = 1;  // Initialize Number of multiples
    
    cout << "The first five multiples for " << number << " are: ";
    
    while (n < number && multiples <= 5) {
        n++;
        if(number % n != 0)
            continue;  // If n is not a factor resume counting
        
        // Otherwise display the factor
        cout << n << (multiples == 5 ? "" : ", ");
        number /= n;  // set the new number
        n = 1;  // Reset counting
        multiples++;
    }

    return 0;
}

