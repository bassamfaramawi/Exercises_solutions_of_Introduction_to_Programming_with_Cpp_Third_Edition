/*
 * 2.15 (Geometry: distance of two points) Write a program that prompts the user 
   to enter two points (x1, y1) and (x2, y2) and displays their distance between 
   them. The formula for computing the distance is root square of ((x2 - x1)2 + 
   (y2 - y1)2). Note that you can use Math.pow(a, 0.5) to compute 2a.
 */

/* 
 * File:   Exercise15_02.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on March 25, 2018, 2:46 AM
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    double x1, y1, x2, y2;
    
    // Asking for entering inputs
    cout << "Enter x1 and y1: ";
    cin >> x1 >> y1;
    
    cout << "Enter x2 and y2: ";
    cin >> x2 >> y2;
    
    // Calculate and display the result
    cout << "The distance between the two points is " ;
    cout <<  pow((pow(x2 - x1, 2) + pow(y2 -y1, 2)), 0.5);
    
    return 0;
}

