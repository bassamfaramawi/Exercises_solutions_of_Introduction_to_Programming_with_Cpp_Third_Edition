/*
 5.3 (Conversion from millimeters to inches) Write a program that displays the 
   following table (note that 1 millimeter is 0.039 inches):
         Millimeters    Inches
         2              0.078
         4              0.156
         ...   
         96             3.744
         98             3.822
 */

/* 
 * File:   Exercise03_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on September 24, 2018, 10:47 PM
 */

#include <iostream> // For the cin & cout functions
#include <iomanip>  // For stream manipulators

using namespace std;

int main() {
    const double MILIMETER_PER_INCH = 0.039;  // Print the header
    
    cout << left << setw(18) << "Millimeters" << "Inches" << endl;
    
    for(int n = 2; n < 100; n += 2)  // Loop for the table body
        cout << left << setw(18) << n << n * MILIMETER_PER_INCH << endl;

    return 0;
}

