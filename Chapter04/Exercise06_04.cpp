/*
 *4.6 (Random points on a circle) Write a program that generates three random points
on a circle centered at (0, 0) with radius 40 and display three angles in a triangle
formed by these three points, (Hint: Generate a random angle a in radians between 0 
and 2p, and the point determined by this angle is (r*cos(a), r*sin(a)).)
 */

/* 
 * File:   Exercise06_04.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on September 9, 2018, 10:59 PM
 */

#include <iostream> // For cin & cout functions
#include <cmath>   // For math functions
#include <iomanip>  // For stream manipulators
#include <stdlib.h>  // For rand & srand functions
#include <ctime>   // For time function

using namespace std;

int main() {
    double r = 40;   // The circle radius
    
    srand(time(0));  // set the seed of rand function
    
    // Generate the three alpha angles in radians
    double alpha1 = (rand() % 10) * 0.1 * 360 * M_PI / 180;
    double alpha2 = (rand() % 10) * 0.1 * 360 * M_PI / 180;
    double alpha3 = (rand() % 10) * 0.1 * 360 * M_PI / 180;
    
    // Compute the coordinates of the three points
    double x1 = r * cos(alpha1),
            y1 = r * sin(alpha1),
            x2 = r * cos(alpha2),
            y2 = r * sin(alpha2),
            x3 = r * cos(alpha3),
            y3 = r * sin(alpha3);
    
    // Compute the 3 points formed on the circle
    double a = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    double b = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    double c = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    
    // Obtain three angles in degrees
    double A = (acos((a * a - b * b - c * c) / (-2 * b * c))) * 180 / M_PI;
    double B = (acos((b * b - a * a - c * c) / (-2 * a * c))) * 180 / M_PI;
    double C = (acos((c * c - b * b - a * a) / (-2 * a * b))) * 180 / M_PI;
    
    // Display the results
    cout << "Circle with radius = 40 and centered at (0, 0) has a " << endl 
            << "triangle formed  from three random points: " << endl 
            << fixed << setprecision(2) << x1 << " " << y1 << " " << x2 << " " 
            << y2 << " " << x3 << " " << y3 << " " << endl;
    cout << "and 3 angles: " << endl << fixed << setprecision(2) << A << " " 
            << B << " " << C;

    return 0;
}

