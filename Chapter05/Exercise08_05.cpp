/*
 5.8 (Use the exp function) Write a program that prints the following table using 
 * the exp function:
       Number     Exponent
       0          1
       1          2.71828
       ...    
       9          8103.08
       10         22026.5
 */

/* 
 * File:   Exercise08_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on September 26, 2018, 7:53 PM
 */

#include <iostream> // For the cin & cout functions
#include <iomanip>  // For stream manipulators
#include <cmath>  // For math functions
using namespace std;

int main() {
    // Print the header
    cout << setw(12) << "Number" << setw(12) << "Exponent" << endl;
    
    // Print the table body
    for(int n = 0; n <= 10; n++)
        cout << setw(12) << n << setw(12) << exp(n) << endl;
    
    return 0;
}

