/*
 4.4 (Geometry: area of a hexagon) The area of a hexagon can be computed using the
      following formula (s is the length of a side):
              Area = 6 * s * s / (4 * tan(M_PI / 6))
      Write a program that prompts the user to enter the side of a hexagon and 
      displays its area.
 */

/* 
 * File:   Exercise04_04.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on September 9, 2018, 10:50 PM
 */

#include <iostream> // For cin & cout functions
#include <cmath>   // For math functions
#include <iomanip>  // For stream manipulators

using namespace std;

int main(int argc, char** argv) {
    // Prompt the user to enter the side of the pentagon
    cout << "Enter the side:";
    double s;
    cin >> s;
    
    // Compute the area of the pentagon
    double area = 6 * s * s / (4 * tan(M_PI / 6));
    
    // Display the result
    cout << "The area of the pentagon is " << fixed << setprecision(2) << area;

    return 0;
}

