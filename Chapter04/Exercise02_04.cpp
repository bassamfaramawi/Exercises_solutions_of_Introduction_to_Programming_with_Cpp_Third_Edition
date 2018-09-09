/*
 3.2 (Geometry: great circle distance) The great circle distance is the distance between
        two points on the surface of a sphere. Let (x1, y1) and (x2, y2) be the geographical
        latitude and longitude of two points. The great circle distance between the two
        points can be computed using the following formula:
               d = radius * arccos(sin(x1) * sin(x2) + cos(x1) * cos(x2) * cos(y1 - y2))
        Write a program that prompts the user to enter the latitude and longitude of two
        points on the earth in degrees and displays its great circle distance. The average
        earth radius is 6,371.01 km. Note that you need to convert the degrees into toRadians
        using the toRadians function since the Python trigonometric functions use
        toRadians. The latitude and longitude degrees in the formula are for north and west.
        Use negative to indicate south and east degrees.
 */

/* 
 * File:   Exercise02_04.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on September 8, 2018, 11:04 AM
 */

#include <iostream> // For cin & cout functions
#include <cmath>   // For math functions

using namespace std;

int main() {
    // Prompt the user to enter point 1 (latitude and longitude) in degrees
    cout << "Enter point 1 (latitude and longitude) in degrees: ";
    double x1, y1;
    cin >> x1 >> y1;
    
    // Prompt the user to enter point 2 (latitude and longitude) in degrees
    cout << "Enter point 2 (latitude and longitude) in degrees: ";
    double x2, y2;
    cin >> x2 >> y2;
    
    // Convert the degrees into radians
    x1 *= (M_PI / 180);
    y1 *= (M_PI / 180);
    x2 *= (M_PI / 180);
    y2 *= (M_PI / 180);
    
    const double EARTH_RADIUS = 6371.01;  // earth radius in Km as a constant
    
    // Compute the great circle distance
    double d = EARTH_RADIUS * acos(sin(x1) * sin(x2) + cos(x1) 
            * cos(x2) * cos(y1 - y2));
    
    // Display the result
    cout << "The distance between the two points is " <<  d << " km";

    return 0;
}

