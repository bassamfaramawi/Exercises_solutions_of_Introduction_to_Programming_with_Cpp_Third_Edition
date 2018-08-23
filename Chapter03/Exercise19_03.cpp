/*
 **3.19 (Geometry: point in a circle?) Write a program that prompts the user to 
 *       enter a point (x, y) and checks whether the point is within the circle 
 *       centered at (0, 0) with radius 10. For example, (4, 5) is inside the 
 *       circle and (9, 9) is outside the circle, as shown in Figure 3.7a.
 *       (Hint: A point is in the circle if its distance to (0, 0) is less than 
 *       or equal to 10. The formula for computing the distance is 
 *                2(x2 - x1)2 + (y2 - y1)2. 
 *       Test your program to cover all cases.)
 */

/* 
 * File:   Exercise19_03.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on August 22, 2018, 12:55 AM
 */

#include <iostream>   // For cin & cout functions
#include <cmath>   // For pow function

using namespace std;

int main() {
    const double RADIUS = 10;   // Assign the circle radius
                
    // Asking for entering a point
    cout << "Enter a point with two coordinates: ";
    double x, y;
    
    cin >> x >> y;  // Receive values
    
    // Calculate distance from (0, 0)
    double distance = pow(x * x + y * y, 0.5);
    
    // Check if in circle and display the result
    cout << "Point (" << x << ", " << y << ") is " << 
            (distance <= RADIUS ? "" : "not ") << "in the circle";

    return 0;
}

