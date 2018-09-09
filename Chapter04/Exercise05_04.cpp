/*
 *3.5 (Geometry: area of a regular polygon) A regular polygon is an n-sided polygon in
      which all sides are of the same length and all angles have the same degree (i.e., the
      polygon is both equilateral and equiangular). The formula for computing the area
      of a regular polygon is
         Area = n * s * s / (4 * math.tan(math.pi / n))
      Here, s is the length of a side. Write a program that prompts the user to enter the
      number of sides and their length of a regular polygon and displays its area.
 */

/* 
 * File:   Exercise05_04.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on September 9, 2018, 10:55 PM
 */

#include <iostream> // For cin & cout functions
#include <cmath>   // For math functions
#include <iomanip>  // For stream manipulators

using namespace std;

int main(int argc, char** argv) {
    // Prompt the user to enter the number of sides of the pentagon
    cout << "Enter the number of sides:";
    double n;
    cin >> n;
    
    // Prompt the user to enter the side of the pentagon
    cout << "Enter the side:";
    double s;
    cin >> s;
    
    // Compute the area of the pentagon
    double area = n * s * s / (4 * tan(M_PI / n));
    
    // Display the result
    cout << "The area of the pentagon is " << fixed << setprecision(2) << area;

    return 0;
}

