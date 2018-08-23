/*
 3.34 (Random point) Write a program that displays a random coordinate in a square.
The square is centered at (0, 0) with side of 300.
 */

/* 
 * File:   Exercise34_03.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on August 23, 2018, 8:27 PM
 */

#include <cstdlib>  // For rand & srand functions
#include <iostream> // For cin & cout functions
#include <cmath> // For time function

using namespace std;

int main() {
    srand(time(0));  // Set the seed of  random function
    
    // Generate random coordinates inside the square
    int randomX = rand() % 300 - 150,
                randomY = rand() % 300 - 150;
        
    //display the result
    cout << "The random point coordinate is (" << randomX << ", " << randomY << ")";

    return 0;
}

