/*
 5.5 (Conversion from millimeters to inches and inches to millimeters) Write a program
that displays the following tables side by side (note that 1 millimeter is 0.039 inches):
            Millimeters  Inches   |   Inches  Millimeters
            2            0.078    |   1       25.641
            4            0.156    |   2       51.282
            ...         
            98           3.822    |   49      1256.410
            100          3.900    |   50      1282.051
 */

/* 
 * File:   Exercise05_05.cpp
 * Author: Administrator
 *
 * Created on September 26, 2018, 9:21 AM
 */

#include <iostream> // For the cin & cout functions
#include <iomanip>  // For stream manipulators

using namespace std;

int main() {
    const double MILIMETER_PER_INCH = 0.039; 
    
    // Print the header
    cout << left << setw(12) << "Millimeters" << left << setw(12) << "Inches" 
            << left << setw(12) << "|" << left << setw(12) << "Inches" << left 
            << setw(12) << "Millimeters" << endl;
    
    for(int millimeters = 2, inches = 1; millimeters < 100; 
            millimeters += 2, inches++)  // Loop for the table body
        cout << left << setw(12) << millimeters <<  left << setw(12) << 
                millimeters * MILIMETER_PER_INCH <<  left << setw(12) << 
                "|" <<  left << setw(12) << inches <<  left << setw(12) 
                << inches / MILIMETER_PER_INCH << endl;

    return 0;
}

