/*
 * 2.2 (Compute the volume of a cylinder) Write a program that reads in the radius
   and length of a cylinder and computes the area and volume using the following
   formulas:
   area = radius * radius * p
   volume = area * length
 */

/* 
 * File:   Exercise02_02.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on March 19, 2018, 7:12 PM
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    const double PI = 3.14;
    double radius, length, area, volume;
    
    // Asking for entering input
    cout << "Enter the radius and length of a cylinder: ";
    cin >> radius >> length;
    
    // Print the result
    cout << "The area is " << (area = pow(radius, 2.0) * PI) << endl;
    cout << "The volume is " << (volume = area * length) << endl;

    return 0;
}

