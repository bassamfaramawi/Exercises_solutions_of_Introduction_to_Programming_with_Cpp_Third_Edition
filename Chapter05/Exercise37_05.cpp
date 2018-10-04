/*
 *5.37 (Summation) Write a program to compute the following summation:
     1 / ((99^1/3) - (93^1/3)) + 1 / ((93^1/3) - (87^1/3)) + 1 / ((87^1/3) - 
     (81^1/3)) + ... + 1 / ((9^1/3) - (3^1/3))
 */

/* 
 * File:   Exercise37_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on October 2, 2018, 8:31 PM
 */

#include <iostream> // For the cin & cout functions
#include <cmath>  // For math functions

using namespace std;

int main() {
    double sum = 0;  // Initialize the summation
    
    for(int n = 99; n >= 9; n -= 6)
        sum += (1.0 / (pow(n, 1.0/3) - pow(n - 6, 1.0/3)));
    
    cout << "The summation is " << sum;  // Display the result

    return 0;
}