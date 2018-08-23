/*
 *3.8 (Comparing Integers) Write a program that prompts the user to enter the 
 * edges of a triangle and compares them. If all edges are equal, display 
 * Equilateral Triangle; if only two edges are equal, display Isosceles Triangle 
 * and if none of the edges are equal, display Scalene Triangle.
 */

/* 
 * File:   Exercise08_03.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on August 13, 2018, 2:31 AM
 */

#include <iostream>      // for cin & cout functions

using namespace std;

/*
 * 
 */
int main() {
    // Prompt the user to enter the edges of a triangle
    cout << "Enter the edges of a triangle: ";
    double side1, side2, side3;
    
    cin >> side1 >> side2 >> side3;   // Receive value
    
    // If 3 edges are equal
    if((side1 == side2) && (side2 == side3))  
        cout << "Equilateral Triangle";
    
    // If 2 edges are equal
    else if(side1 == side2 || side1 == side3 || side2 == side3)
        cout << "Isosceles Triangle";
    
    // If none of edges are equal
    else
        cout << "Scalene Triangle";

    return 0;
}

