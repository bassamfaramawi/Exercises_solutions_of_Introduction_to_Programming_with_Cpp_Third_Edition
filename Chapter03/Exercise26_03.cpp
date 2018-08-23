/*
 **3.26  (Geometry: two circles) Write a program that prompts the user to enter 
the center coordinates and radii of two circles and determines whether the second 
circle is inside the first or overlaps with the first, as shown in Figure 3.10. 
(Hint: circle2 is inside circle1 if the distance between the two centers 6 = 
|r1 - r2| and circle2 overlaps circle1 if the distance between the two centers 
<= r1 + r2. Test your program to cover all cases.)
 */

/* 
 * File:   Exercise26_03.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on August 22, 2018, 2:07 AM
 */

#include <iostream>  // For cin & cout functions
#include <cmath>  // For abs & pow functions

using namespace std;

int main() {
    // Prompt the user to enter circle1's center x-, y-coordinates, and radius
    cout << "Enter circle1's center x-, y-coordinates, and radius: ";
    double x1, y1, r1;
    
    cin >> x1 >> y1 >> r1;  // Receive values
    
    // Prompt the user to enter circle2's center x-, y-coordinates, and radius
    cout << "Enter circle2's center x-, y-coordinates, and radius: ";
    double x2, y2, r2;
    
    cin >> x2 >> y2 >> r2;  // Receive values
    
    // Calculate the distance between tow centers
    double distance = pow((x2 - x1) * (x2 - x1) + 
            (y2 - y1) * (y2 - y1), 0.5);
    
    // Circle2 (the smallest circle) is inside circle1
    if(distance <= abs(r1 - r2))
        cout << "circle2 is inside circle1";
    
    // Circle2 overlaps circle1
    else if(distance <= abs(r1 + r2))
        cout << "circle2 overlaps circle1";
    
    // otherwise circle2 does not overlap circle1
    else
         cout << "circle2 does not overlap circle1";

    return 0;
}

