/*
 * *2.5 (Financial application: calculate tips) Write a program that reads the 
     subtotal and the gratuity rate, then computes the gratuity and total. For 
     example, if the user enters 10 for subtotal and 15% for gratuity rate, the 
     program displays $1.5 as gratuity and $11.5 as
 */

/* 
 * File:   Exercise05_02.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on March 19, 2018, 11:05 PM
 */

#include <iostream>

using namespace std;

int main() {
    
    double subtotal, gratuityRate, total, gratuity;
    
    // Asking for entering input
    cout << "Enter the subtotal and a gratuity rate: ";
    cin >> subtotal >> gratuityRate;
    
    // Compute and print the results
    cout << "The gratuity is $" << (gratuity = gratuityRate / 100.0 * subtotal);
    cout << " and total is $" << (total = subtotal + gratuity) << endl;

    return 0;
}

