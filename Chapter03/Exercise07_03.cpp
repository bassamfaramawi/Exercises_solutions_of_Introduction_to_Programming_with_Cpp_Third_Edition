/*
 *3.7 (Sort three integers) Write a program that prompts the user to enter three 
 * integers and display the integers in non-decreasing order.
 */

/* 
 * File:   Exercise07_03.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on August 13, 2018, 2:25 AM
 */

#include <iostream>      // for cin & cout functions

using namespace std;

int main() {
    //Prompt the user to enter  integers
    cout << "Enter 3 integers: ";
    int num1, num2, num3, temp;
    
    cin >> num1 >> num2 >> num3;  // Receive values
    
    // Make the necessary changes
    if(num1 > num2) {temp = num1;  num1 = num2;  num2 = temp;}
    if(num2 > num3) {temp = num2;  num2 = num3;  num3 = temp;}
    if(num1 > num2) {temp = num1;  num1 = num2;  num2 = temp;}
    
    // Display the results
    cout << "The integers in non-decreasing order: ";
    cout << num1 << " " << num2 << " " << num3;

    return 0;
}

