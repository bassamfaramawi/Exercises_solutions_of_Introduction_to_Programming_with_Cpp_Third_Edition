/*
 *3.3 (Algebra: solve 2 * 2 linear equations) A linear equation can be solved 
        using Cramer’s rule given in Programming Exercise 1.13. Write a program 
        that prompts the user to enter a, b, c, d, e, and f and displays the 
        result. If ad - bc is 0, report that “The equation has no solution.”
 */

/* 
 * File:   Exercise03_03.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on August 11, 2018, 3:38 AM
 */

#include <iostream>      // for cin & cout functions

using namespace std;

int main() {
    // Prompt the user to enter a, b, c, d, e, f: 
    cout << "Enter a, b, c, d, e, f: ";   
    double a, b, c, d, e, f, x,y;
    
    cin >> a >> b >> c >> d >> e >> f;     // Receive values
    
     if((a * d - b * c) == 0) // The equation has no solution
         cout << "The equation has no solution";
    
     else { //Other than calculate x and y and display the results
         x = (e * d - b * f) / (a * d - b * c);
         y = (a * f - e * c) / (a * d - b * c);
         
         cout << "x is " << x << " and y is " << y;
     }

    return 0;
}

