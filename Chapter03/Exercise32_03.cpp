/*
 *3.32 (Algebra: slope-intercept form) Write a program that prompts the user to 
 * enter the coordinates of two points (x1, y1) and (x2, y2), and displays the 
 * line equation in the slope-intercept form, i.e., y = mx + b. For a review of 
 * line equations, see www.purplemath.com/modules/strtlneq.htm. m and b can be 
 * computed using the following formula:
 
          m = (y2 - y1)/(x2 - x1) b = y1 - mx1
 * Don’t display m if it is 1 and don’t display b if it is 0.
 */

/* 
 * File:   Exercise32_03.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on August 24, 2018, 12:35 AM
 */

#include <iostream>  // For cin & cout functions
#include <cmath>  // For abs function

using namespace std;

int main() {
    // Prompt the user to enter the coordinates for two points
    cout << "Enter the coordinates for two points: ";
    double x1, y1, x2, y2;
    
    cin >> x1 >> y1 >> x2 >> y2;  // Receive the values
    
    // Calculate m & b values
    double m = (y2 - y1)/(x2 - x1),
            b = y1 - m * x1;
    
    // Display the result
    cout << "The line equation for two points (" << x1 << ", " << y1 << ") and (" 
            << x2 << ", " << y2 << ") is y = " ;
    
    abs(m) < 1E-5 ? cout << "" : (abs(1 - abs(m)) < 1E-5 ? cout << "x" : cout << m << " x");
    
    abs(b) < 1E-5 ? cout << "" : cout << " + " << b;
    

    return 0;
}

