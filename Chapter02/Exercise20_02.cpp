/*
2.20 (Slope of a line) Write a program that prompts the user to enter the 
      coordinates of two points (x1, y1) and (x2, y2), and displays the slope of 
      the line that connects the two points. The formula of the slope is 
        (y2 - y1)/(x2 - x1).
 */

/* 
 * File:   Exercise20_02.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on March 25, 2018, 12:58 PM
 */

#include <iostream>

using namespace std;

int main() {
    
    double x1, y1, x2, y2;
    
    // Asking for entering inputs
    cout << "Enter the coordinates of two points (x1, y1) and (x2, y2): ";
    cin >> x1 >> y1 >> x2 >> y2;
    
    // Calculate then display the result
    cout << "Slope = " << (y2 - y1)/(x2 - x1) << endl;

    return 0;
}

