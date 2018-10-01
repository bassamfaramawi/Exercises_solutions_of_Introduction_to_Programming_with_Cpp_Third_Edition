/*
 *5.26 (Product of a series) Write a program to calculate the following series:

      1/5 * 1/9 * 1/13 * 1/17 * 1/21 * 1/25 * ... * 1/93 * 1/97
 */

/* 
 * File:   Exercise26_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on October 1, 2018, 5:08 PM
 */

#include <iostream> // For the cin & cout functions

using namespace std;

int main() {
    int n = 97;  // The series count
    double product  = 1;  // Initialize the product
    
    // Display the product
    cout << "The product of the series 1/5 * 1/9 ... * 1/97 is: ";
    for(int i = 5; i <= n; i += 4)
        product *= (1.0 / i);
    cout << product << endl;

    return 0;
}

