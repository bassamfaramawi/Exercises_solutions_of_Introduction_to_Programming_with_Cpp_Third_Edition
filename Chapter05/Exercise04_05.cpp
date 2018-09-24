/*
 5.4 (Conversion from meters to feet) Write a program that displays the following 
   table (note that 1 meter is 3.280 feet):
            Meters        Feet
            1             3.280
            2             6.560
            ...       
            14            45.920
            15            49.200
 */

/* 
 * File:   Exercise04_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on September 25, 2018, 12:29 AM
 */

#include <iostream> // For the cin & cout functions
#include <iomanip>  // For stream manipulators

using namespace std;

int main() {
    const double METERS_PER_FEET = 3.280;  // Print the header
    
    cout << left << setw(18) << "Meters" << "Feet" << endl;
    
    for(int n = 1; n <= 15; n++)  // Loop for the table body
        cout << left << setw(18) << n << fixed << setprecision(3) 
                << n * METERS_PER_FEET << endl;

    return 0;
}

