/*
 **3.20 (Geometry: point in a rectangle?) Write a program that prompts the user 
 *       to enter a point (x, y) and checks whether the point is within the 
 *       rectangle centered at (0, 0) with width 10 and height 5. For example, 
 *       (2, 2) is inside the rectangle and (6, 4) is outside the rectangle, as 
 *       shown in Figure 3.7b. (Hint: A point is in the rectangle if its horizontal 
 *       distance to (0, 0) is less than or equal to 10 / 2 and its vertical distance
 *       to (0, 0) is less than or equal to 5 / 2. Test your program to cover all
 *       cases.)
 */

/* 
 * File:   Exercise20_03.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on August 22, 2018, 1:06 AM
 */

#include <iostream>   // For cin & cout functions
#include <cmath>   // For pow function

using namespace std;

int main() {
    // Assign the rectangle width and height
    const double WIDTH = 10.0;
    const double HEIGHT = 5.0;
    
    // Asking for entering a point
    cout << "Enter a point with two coordinates: ";
    double x, y;
    
    cin >> x >> y;  // Receive values
    
    // Check if in the point inside the rectangle and display the result
    cout << "Point (" << x << ", " << y << ") is " << 
            (x <= WIDTH / 2 && y <= HEIGHT / 2 ? "" : "not ") <<  "in the rectangle";

    return 0;
}

