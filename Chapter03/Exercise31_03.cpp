/*
 *3.31 (Geometry: point on line segment) Programming Exercise 3.32 shows how to 
test whether a point is on an unbounded line. Revise Programming Exercise 3.32 
to test whether a point is on a line segment. Write a program that prompts the 
user to enter the three points for p0, p1, and p2 and displays whether p2 is on 
the line segment from p0 to p1.
 */

/* 
 * File:   Exercise31_03.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on August 23, 2018, 6:32 PM
 */

#include <iostream> // For cin & cout functions
#include <cmath> // For min & max functions

using namespace std;

int main() {
    // Asking to enter three points for p0, p1, and p2
    cout << "Enter three points for p0, p1, and p2: ";
    double x0, y0, x1, y1, x2, y2;
    
    cin >> x0 >> y0 >> x1 >> y1 >> x2 >> y2;
    
    
    // Calculate the position
    double position = (x1 - x0) * (y2 - y0) - (x2 - x0) * (y1 - y0);
    
    // point is on a line segment if position = 0 and x2 is between x0 and x1
    if(position == 0 && x2 >= min(x0, x1) && x2 <= max(x0, x1))
        cout << "(" << x2 << ", " << y2 << 
                ") is on the line segment from (" << x0 << ", " << y0 << 
                ") to (" << x1 << ", " << y1 << ")";
    
    // Otherwise it is not on the line segment
    else
        cout << "(" << x2 << ", " << y2 << 
                ") is not on the line segment from (" << x0 << ", " << y0 << 
                ") to (" << x1 << ", " << y1 << ")";

    return 0;
}

