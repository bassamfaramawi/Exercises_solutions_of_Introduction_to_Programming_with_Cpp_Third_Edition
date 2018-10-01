/*
 **5.28 (Compute e^x) You can approximate ex using the following series:
e x = 1 + x / 1! + x2 / 2! + x3 / 3! + x4 / 4! + ... + x^n / n! 
Write a program that prompts the user to enter x and displays the e^x value for 
n = 15.
(Hint: Because n! = n * (n - 1) * c * 2 * 1, then
1 / n! is 1 / n(n - 1)!
Initialize e^x and item to be 1 and keep adding a new item to e^x. The new item is
the previous item multiplied by x and divided by n for n = 2, 3, 4, . . ., 15).
 */

/* 
 * File:   Exercise28_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on October 1, 2018, 5:47 PM
 */

#include <iostream> // For the cin & cout functions
#include <cmath>  // For math functions

using namespace std;

int main() {
    cout << "Enter x: ";
    double x;
    cin >> x;
    
    double e = 1.0,
            item  = 1.0;
    
    int n = 15;
     
    for(int i = 2; i <= n; i++) {
        item *= (x / i);
         e += item;
    }
    
    cout << "e for x = " << x << " and n = " << n << " is: " << e;

    return 0;
}

