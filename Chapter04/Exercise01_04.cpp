/*
    4.1 (Geometry: area of a pentagon) Write a program that prompts the user to enter
       the length from the center of a pentagon to a vertex and computes the area of 
       the pentagon, as shown in the following figure.
       The formula for computing the area of a pentagon is
             Area =3 * 3 ** 0.5 / 2 * s ** 2
       ,where s is the length of a side. The side can be computed using the formula
             s = 2 * r * sin(pi / 5)
       where r is the length from the center of a pentagon to a vertex. Round up two
       digits after the decimal point.
 */

/* 
 * File:   Exercise01_04.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on September 8, 2018, 10:38 AM
 */

#include <iostream> // For cin & cout functions
#include <cmath>   // For math functions
#include <iomanip>  // For stream manipulators

using namespace std;

int main() {
    // Prompt the user to enter the length from the center to a vertex
    cout << "Enter the length from the center to a vertex: ";
    double r;
    cin >> r;
    
    // Compute the side length
    double s = 2 * r * sin(M_PI / 5);
    
    // Compute the pentagon area
    double area = 5 * s * s / (4 * tan(M_PI / 5));
    
    // Display the result
    cout << "The area of the pentagon is " << fixed << setprecision(2) << area;

    return 0;
}

