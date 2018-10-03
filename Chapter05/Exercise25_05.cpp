/*
 *5.25 (Demonstrate cancellation errors) A cancellation error occurs when you are
manipulating a very large number with a very small number. The large number
may cancel out the smaller number. For example, the result of 100000000.0 +
0.000000001 is equal to 100000000.0. To avoid cancellation errors and obtain
more accurate results, carefully select the order of computation. For example, in
computing the following series, you will obtain more accurate results by computing
from right to left rather than from left to right:
                1 + 1/2 + 1/3 + ... + 1/n

Write a program that compares the results of the summation of the preceding
series, computing from left to right and from right to left with n = 50000.
 */

/* 
 * File:   Exercise25_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on October 1, 2018, 5:03 PM
 */

#include <iostream> // For the cin & cout functions

using namespace std;

int main() {
    int n = 50000;  // The series count
    double sum  = 0;  // Initialize the summation
    
    // Display the summation from left to right
    cout << "The summation of a series with n = 50000 from left to right: ";
    for(int i = 1; i <= n; i++)
        sum += (1.0 / i);
    cout << sum << endl;
    
    // Display the summation from right to left
    cout << "The summation of a series with n = 50000 from right to left: ";
    for(int i = n; i > 0; i--)
        sum += (1.0 / i);
    cout << sum;

    return 0;
}

