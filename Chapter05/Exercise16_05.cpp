/*
 *5.16 (Compute the greatest common divisor) Another solution for Listing 5.10 to 
 find the greatest common divisor (GCD) of two integers n1 and n2 is as follows: 
 First find d to be the minimum of n1 and n2, then check whether d, d-1, d-2, . .
 . , 2, or 1 is a divisor for both n1 and n2 in this order. The first such common 
 divisor is the greatest common divisor for n1 and n2. Write a program that prompts 
 the user to enter two positive integers and displays the GCD.
 */

/* 
 * File:   Exercise16_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on September 29, 2018, 4:28 PM
 */

#include <iostream> // For the cin & cout functions
#include <cmath>  // For math functions

using namespace std;

int main() {
    //Prompt the user to enter two positive integers
    cout << "Enter two positive integers: ";
    int n1, n2;
    cin >> n1 >> n2;
    
    int d = min(n1, n2),  // The minimum of n1 & n2
            gcd = 1;  // Initialize the greatest common divisor
    
    for(int n = d; n >1; n--) 
        if(n1 % n == 0 && n2 % n == 0) {
            gcd = n;
            break;
        }
    
    //  Display the result
    cout << "The gcd for " << n1 << " and " << n2 << " is: " << gcd;

    return 0;
}

