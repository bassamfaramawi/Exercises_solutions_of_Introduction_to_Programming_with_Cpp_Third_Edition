/*
 * 2.16 (Geometry: area of a hexagon) Write a program that prompts the user to 
   enter the side of a hexagon and displays its area. The formula for computing 
   the area of a hexagon is
      Area = 3 * square root(3) / 2 * s2
   where s is the length of a side.
 */

/* 
 * File:   Exercise16_02.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on March 25, 2018, 2:56 AM
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    double side, area;
    
    // Asking for entering inputs
    cout << "Enter the side: ";
    cin >> side;
    
    // Calculate the values
    area = 3 * pow(3, 0.5) / 2 * side * side;
        
    // Display the result
    cout << "The area of the hexagon is " << (int)(area * 10000) / 10000.0 << endl;

    return 0;
}

