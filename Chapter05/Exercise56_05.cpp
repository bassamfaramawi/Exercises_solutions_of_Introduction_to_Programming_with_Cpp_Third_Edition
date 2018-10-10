/*
 *5.56 (Corner point coordinates) Suppose an n-sided regular polygon is centered 
at (0, 0) with one point at the 3 o’clock position, as shown in Figure 5.4. Write 
a program that prompts the user to enter the number of the sides, the radius of 
the bounding circle of a polygon, and displays the coordinates of the corner 
points on the polygon.
 */

/* 
 * File:   Exercise56_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on October 11, 2018, 2:06 AM
 */

#include <iostream> // For the cin & cout functions
#include <cmath>  // For math functions

using namespace std;

int main() {
    // Prompt the user to enter the number of the sides
    cout << "Enter the number of the sides: ";
    int numberOfSides;
    cin >> numberOfSides;
    
    // Prompt the user to enter the radius of the bounding circle
    cout << "Enter the radius of the bounding circle: ";
    double radius;
    cin >> radius;
    
    double x, y;  // The point coordinates
    double angle = 360 / numberOfSides;  // The value of one angle of rotation
    double toRadianFactor = M_PI / 180; // The factor to convert angle to radians
    
    
    // Compute and display the points coordinates
    cout << "The coordinates of the points on the polygon are " << endl;
    for(int n = 0; n < numberOfSides; n++) {
        x = radius * cos(n * angle * toRadianFactor);
        y = radius * sin(n * angle * toRadianFactor);
        cout << "(" << x << ", " << y << ")" << endl;
    }
    
    return 0;
}

