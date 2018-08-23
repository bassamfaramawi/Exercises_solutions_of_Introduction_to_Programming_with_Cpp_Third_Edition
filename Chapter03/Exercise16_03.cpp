/*
 **3.16 (Compute the area of an equilateral triangle) Write a program that reads 
 *      three edges of a triangle and computes the area if the input is valid. 
 *      Otherwise, it displays that the input is invalid. The input is valid if 
 *      all the edges of the triangle are equal.
 */

/* 
 * File:   Exercise16_03.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on August 21, 2018, 10:57 PM
 */

#include <iostream>   // For  cout & cin functions
#include <cmath>   // For pow() function

using namespace std;

int main() {
    //Prompt the user to enter 3 edges in cm
    cout << "Enter the 3 edges in cm: ";
    double edge1, edge2, edge3;
    
    cin >> edge1 >> edge2 >> edge3;    // Receive the values
    
    // Check if the input is valid and display the result
    if((edge1 + edge2) > edge3 && (edge2 + edge3) > edge1 && 
            (edge1 + edge3) > edge2) {
        double s = (edge1 + edge2 + edge3) / 2;
        
        cout << "Area = " << pow((s * (s - edge1) * (s - edge2) * (s - edge3)), 0.5);
    }
    else 
        cout << "The input is invalid.";

    return 0;
}

