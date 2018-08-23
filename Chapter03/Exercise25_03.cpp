/*
 **3.25  (Geometry: two rectangles) Write a program that prompts the user to enter 
*   the center x-, y-coordinates, width, and height of two rectangles and determines
*   whether the second rectangle is inside the first or overlaps with the first, 
*   as shown in Figure 3.9. Test your program to cover all cases.
 */

/* 
 * File:   Exercise25_03.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on August 22, 2018, 1:55 AM
 */

#include <iostream>  // For cin & cout functions
#include <cmath>  // For abs & max & min functions

using namespace std;

int main() {
    // Prompt the user for entering r1's center x-, y-coordinates, width, and height
    cout << "Enter r1's center x-, y-coordinates, width, and height: ";
    double x1, y1, w1, h1;
    
    cin >> x1 >> y1 >> w1 >> h1;  // Receive values
    
    // Prompt the user for entering r2's center x-, y-coordinates, width, and height
    cout << "Enter r2's center x-, y-coordinates, width, and height: ";
     double x2, y2, w2, h2;
     
     cin >> x2 >> y2 >> w2 >> h2;  // Receive values
     
    // r2 rectangle doesn't overlap r1 rectangle
    if(abs(max(x1, x2) - min(x1, x2)) > w1 + w2 &&
            abs(max(y1, y2) - min(y1, y2)) > h1 + h2)
        cout << "r2 does not overlap r1";
    
    //  r2 rectangle is inside r1
    else if(abs(max(x1, x2) - min(x1, x2)) + (w2 / 2) <= w1 / 2 &&
            abs(max(y1, y2) - min(y1, y2)) + (h2 / 2) <= h1 / 2)
        cout << "r2 is inside r1";
    
    // r2 rectangle overlap r1 rectangle
    else
        cout << "r2 overlaps r1";

    return 0;
}

