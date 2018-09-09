/*
 *4.7 (Corner point coordinates) Suppose a pentagon is centered at (0, 0) with one 
point at the 0 o’clock position. Write a program that prompts the user to enter the 
radius of the bounding circle of a pentagon and displays the coordinates of the five 
corner points on the pentagon.
 */

/* 
 * File:   Exercise07_04.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on September 9, 2018, 11:31 PM
 */

#include <iostream> // For cin & cout functions
#include <cmath>   // For math functions
#include <iomanip>  // For stream manipulators

using namespace std;

int main(int argc, char** argv) {
    // Prompt the user to enter the radius of the bounding circle
    cout << "Enter the radius of the bounding circle: ";
    double r;  
    cin >> r;  // Receive value
    
    // Compute the 5 points coordinates in radians
    double x1 = r * cos(90 * M_PI / 180);
    double y1 = r * sin(90 * M_PI / 180);
    double x2 = r * cos(((360 / 5) + 90) * M_PI / 180);
    double y2 = r * sin(((360 / 5) + 90) * M_PI / 180);
    double x3 = r * cos(((360 * 2 / 5) + 90) * M_PI / 180);
    double y3 = r * sin(((360 * 2 / 5) + 90) * M_PI / 180);
    double x4 = r * cos(((360 * 3 / 5) + 90) * M_PI / 180);
    double y4 = r * sin(((360 * 3 / 5) + 90) * M_PI / 180);
    double x5 = r * cos(((360 * 4 / 5) + 90) * M_PI / 180);
    double y5 = r * sin(((360 * 4 / 5) + 90) * M_PI / 180);
           
    // Display the results
    cout << "The coordinates of five points on the pentagon are";
    cout << fixed << setprecision(4) << "\n(" << x1 << ", " << y1 << ")\n(" << 
            x2 << ", " << y2 << ")\n(" << x3 << ", " << y3 << ")\n(" << 
            x4 << ", " << y4 << ")\n(" << x5 << ", " << y5;

    return 0;
}

