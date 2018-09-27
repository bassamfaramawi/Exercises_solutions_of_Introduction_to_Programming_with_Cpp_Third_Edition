/*
 5.6 (Conversion from meters to feet) Write a program that displays the following
tables side by side (note that 1 meter is 3.280 feet):
      Meters  Feet    |    Feet  Meters
      1       3.280   |    3     0.915
      2       6.560   |    6     1.829
      ...     
      14      45.920  |    42    12.805
      15      49.200  |    45    13.720
 */

/* 
 * File:   Exercise06_05.cpp
 * Author: Administrator
 *
 * Created on September 26, 2018, 1:11 PM
 */

#include <iostream> // For the cin & cout functions
#include <iomanip>  // For stream manipulators

using namespace std;

int main() {
    const double METERS_PER_FOOT = 3.280; 
    
    // Print the header
    cout << left << setw(12) << "Meters" << left << setw(12) << "Feet" 
            << left << setw(12) << "|" << left << setw(12) << "Feet" << left 
            << setw(12) << "Meters" << endl;
    
    for(int meters = 1, feet = 3; meters <= 15; 
            meters++, feet += 3)  // Loop for the table body
        cout << left << setw(12) << meters <<  left << setw(12) << fixed << 
                setprecision(3) << meters * METERS_PER_FOOT <<  left << setw(12) 
                << "|" <<  left << setw(12) << feet <<  left << setw(12) 
                << feet / METERS_PER_FOOT << endl;

    return 0;
}

