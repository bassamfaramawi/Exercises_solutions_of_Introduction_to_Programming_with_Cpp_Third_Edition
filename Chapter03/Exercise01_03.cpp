/*
 *3.1 (Algebra: solve quadratic equations) The two roots of a quadratic equation
         ax2 + bx + c = 0 can be obtained using the following formula:
                r1 = (-b + (b**2 - 4ac)**0.5) / 2a
            and r2 = (-b + (b**2 - 4ac)**0.5) / 2a
         b**2 - 4ac is called the discriminant of the quadratic equation. If it is 
         positive, the equation has two real roots. If it is zero, the equation 
         has one root. If it is negative, the equation has no real roots.
Write a program that prompts the user to enter values for a, b, and c and displays
the result based on the discriminant. If the discriminant is positive, display two
roots. If the discriminant is 0, display one root. Otherwise, display “The equation
has no real roots”.
Note that you can use Math.pow(x, 0.5) to compute 2x
 */

/* 
 * File:   Exercise01_03.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on August 11, 2018, 3:08 AM
 */

#include <iostream>      // for cin & cout functions
#include <cmath>      // for pow function

using namespace std;

int main() {
    
    cout << "Enter a, b, c: ";      // Prompt the user to enter a, b and c
    double a , b, c;
    
    cin >> a >> b >> c;
    
    double discriminant = b * b - 4 * a * c, //Compute discriminant
            r1, r2;
    
    // 1'st if the discriminant is positive 
    if(discriminant > 0){
        // Calculate the tow roots
        r1 = (-b + pow(discriminant, 0.5)) / (2 * a);
        r2 = (-b - pow(discriminant, 0.5)) / (2 * a);
        
        cout << "The equation has two roots " << (int)(r1 * 1E6) / 1E6 <<
                " and " << (int)(r2 * 1E6) / 1E6; // Display the results
    }
    
     else if (discriminant == 0){ // 2'nd if the discriminant = 0 
         r1 = (-b + pow(discriminant, 0.5)) / (2 * a); //Calculate the root
            // Display the result
            cout << "The equation has one root " << (int)(r1 * 1E6) / 1E6;
     }
    
    else // 3'rd if the discriminant is negative 
        cout << "The equation has no real roots";
       

    return 0;
}

