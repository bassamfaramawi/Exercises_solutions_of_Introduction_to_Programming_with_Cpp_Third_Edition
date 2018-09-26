/*
 (Use trigonometric functions) Print the following table to display the tan and 
 cot values of degrees from 0 to 60 with increments of 10 degrees. Round the value 
 to keep four digits after the decimal point.
 */

/* 
 * File:   Exercise07_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on September 26, 2018, 5:35 PM
 */

#include <iostream> // For the cin & cout functions
#include <iomanip>  // For stream manipulators
#include <cmath>  // For math functions

using namespace std;

int main() {
    cout << setw(12) << "Degree" << setw(12) << "Sin/Cos" << setw(12) 
            << "Cos/Sin" << endl;  // Print the header
    
    for(int n = 0; n <= 60; n += 10) 
        cout << setw(12) << n  << fixed << setprecision(4) << setw(12) << 
                tan(n * M_1_PI / 180) << setw(12) << 1 / tan(n * M_1_PI / 180) 
                << endl;  // Print the table body
    
    return 0;
}

