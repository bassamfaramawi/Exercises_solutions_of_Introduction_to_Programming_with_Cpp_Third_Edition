/*
 * *2.19 (Geometry: area of a triangle) Write a program that prompts the user to 
    enter three points (x1, y1), (x2, y2), (x3, y3) of a triangle and displays 
    its area. The formula for computing the area of a triangle is
        s = (side1 + side2 + side3)/2
        area = sqrt(s * (s - side1) * (s - side2) * (s - side3))
 */

/* 
 * File:   Exercise19_02.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on March 25, 2018, 3:11 AM
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    double x1, y1, x2, y2, x3, y3, side1, side2, side3, s, area;
    
    // Asking for entering inputs
    cout << "Enter three points for a triangle: ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        
    // Calculate the values
    side1 = pow((pow(x2 - x1, 2) + pow(y2 -y1, 2)),0.5);
    side2 = pow((pow(x3 - x2, 2) + pow(y3 -y2, 2)),0.5);
    side3 = pow((pow(x1 - x3, 2) + pow(y1 -y3, 2)),0.5);
    s = (side1 + side2 + side3) /2;
    area = pow(s * (s - side1) * (s - side2) * (s - side3), 0.5);
        
    // Display the result
    cout << "The area of the triangle is " << (int)(area *  10) / 10.0;

    return 0;
}

