/*
 *3.27 (Geometry: points in triangle?) Suppose a right triangle is placed in a 
plane as shown below. The right-angle point is placed at (0, 0), and the other 
two points are placed at (200, 0), and (0, 100). Write a program that prompts 
the user to enter a point with x- and y-coordinates and determines whether the 
point is inside the triangle.
 */

/* 
 * File:   Exercise23_03.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on August 22, 2018, 1:32 AM
 */

#include <cstdlib>   // For exit() function
#include <iostream>   // For cin & cout functions

using namespace std;

int main() {
    /* As a way to determine if a point is inside the triangle is to detect 
     if the line connecting the point with the any angle point (the upper 
     angle point (0, 100) for example) is intersecting with the facing side 
     of the triangle (horizontal line in this example) at a point between the 
     other tow angle points ((0, 0) and (200, 0) in this example) then the 
     point is inside the triangle, otherwise it is outside the triangle.
     so here x1 = 0, y1 = 100, x2 = user input, y2 = user input, x3 = 0, 
     y3 = 0, x4 = 200 and y4 = 0. We need to get intersecting point coordinates
     x and y by solving linear equation:
     (y1 - y2)x - (x1 - x2)y = (y1 - y2)x1 - (x1 - x2)y1
     (y3 - y4)x - (x3 - x4)y = (y3 - y4)x3 - (x3 - x4)y3
    */
    
    // Tow intersecting lines
    double x1 = 0, y1 = 100, x3 = 0, y3 = 0, x4 = 200, y4 = 0; 
    
    // Prompt the user for entering a point:
    cout << "Enter a point's x- and y-coordinates: ";
    double x2, y2;
    
    cin >> x2 >> y2;  // Receive value
    
    // Calculate a, b, c, d, e, f
    double a = y1 - y2,
            b = x1 - x2,
            c = y3 - y4,
            d = x3 - x4,
            e = (y1 - y2)* x1 - (x1 - x2) * y1,
            f = (y3 - y4) * x3 - (x3 - x4) * y3,
            x, y;
    
    // If parallel lines then the point is outside the triangle
    if((a * d - b * c) == 0) {
        cout << "The point is not in the triangle";
        exit(0);
    }
    
    // If not parallel lines then compute x and y
    x = (e * d - b * f) / (a * d - b * c);
    y = (a * f - e * c) / (a * d - b * c);
        
    // If intersecting point is between other tow angle points, it's OK
    if(x >= 0 && x <= 200)
        cout << "The point is in the triangle";
    
    //Otherwise it is not in the triangle
    else
        cout << "The point is not in the triangle";

    return 0;
}

