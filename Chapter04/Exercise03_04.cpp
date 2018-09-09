/*
 *4.3 (Computing angles of triangles) Listing 4.1, ComputeAngles.cpp, prompts the
user to enter the x- and y- coordinates of the three corner points in a triangle and
then displays the triangle’s angles. Write a program that prompts the user to enter
the x- and y- coordinates of three corner points of two triangles, displays the
triangle’s angles, and then compares whether the angles of both the triangles are
equal.
 */

/* 
 * File:   Exercise03_04.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on September 8, 2018, 11:31 AM
 */

#include <iostream>  // For input & output functions
#include <cmath>   // For math functions

using namespace std;

int main() {
    // Prompt the user to enter three points of the first triangle
    cout << "Enter three points of first triangle: ";
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
     
    // Prompt the user to enter three points of the second triangle
    cout << "Enter three points of second triangle: ";
    double x4, y4, x5, y5, x6, y6;
    cin >> x4 >> y4 >> x5 >> y5 >> x6 >> y6;
    
    // Compute three sides of first triangle
    double a = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    double b = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    double c = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    
    // Compute three sides of second triangle
    double d = sqrt((x5 - x6) * (x5 - x6) + (y5 - y6) * (y5 - y6));
    double e = sqrt((x4 - x6) * (x4 - x6) + (y4 - y6) * (y4 - y6));
    double f = sqrt((x4 - x5) * (x4 - x5) + (y4 - y5) * (y4 - y5));
    
    // Obtain three angles in radians of first triangle
    double A = acos((a * a - b * b - c * c) / (-2 * b * c));
    double B = acos((b * b - a * a - c * c) / (-2 * a * c));
    double C = acos((c * c - b * b - a * a) / (-2 * a * b));
    
    // Obtain three angles in radians of second triangle
    double D = acos((d * d - e * e - f * f) / (-2 * e * f));
    double E = acos((e * e - d * d - f * f) / (-2 * d * f));
    double F = acos((f * f - e * e - d * d) / (-2 * d * e));
    
    // Display the angles in degrees
    const double PI = 3.14159;
    cout << "\nThe first triangle three angles are " << A * 180 / PI << " "
    << B * 180 / PI << " " << C * 180 / PI << endl;
    
    cout << "\nThe second triangle three angles are " << D * 180 / PI << " "
    << E * 180 / PI << " " << F * 180 / PI << endl;
    
    cout << "\nThe three angles of both triangles are " << ((A == D || A == E || 
            A == F) && (B == D || B == E || B== F) && (C == D || C == E || C == F)
            ? "equal" : "not equal") << endl;

    return 0;
}

