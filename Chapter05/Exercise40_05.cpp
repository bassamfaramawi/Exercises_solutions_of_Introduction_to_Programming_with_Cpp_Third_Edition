/*
 5.40 (Simulation: Even or Odd) Write a program that generates a random integer 1
hundred thousand times and displays the number of even and odd integers.
 */

/* 
 * File:   Exercise40_05.cpp
 * Author: Administrator
 *
 * Created on October 9, 2018, 10:08 AM
 */

#include <iostream> // For the cin & cout functions
#include <cmath>  // For math functions
#include <cstdlib>  // For rand() and srand() functions
#include <ctime>  // For time functions

using namespace std;

int main() {
    int evens = 0;  // Initialize the number of evens
    int odds = 0;  // Initialize the number of odds
    
    int  random;
    
    srand(time(0));  // Set srand() seed
    
    for(int n = 0; n < 1E5; n++)  {
        // Randomly generate 0 for a even or 1 for an odd
        random = rand() % 2;  
        
        if(random == 0) evens++;
        else odds++;
    }
    
    // Display the results
    cout << "After 100,000 times" << endl << "Evens = " << evens << endl 
            << "Odds = " << odds;

    return 0;
}

