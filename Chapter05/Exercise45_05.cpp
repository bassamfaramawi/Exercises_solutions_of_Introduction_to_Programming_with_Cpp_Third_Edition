/*
 *5.45 (Math: combinations) Write a program that displays all possible 
combinations for picking two numbers from integers 1 to 7. Also display the 
total number of all combinations.
 */

/* 
 * File:   Exercise45_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on October 9, 2018, 10:59 PM
 */

#include <iostream> // For the cin & cout functions

using namespace std;

int main() {
    int count = 0;  // Initialize count
        
    for(int n = 1; n <= 7; n++)
        for(int i = n; i <= 7; i++){
            if(n == i) continue;
            cout << n << " " << i << endl;
            count++;
        }
    
    // Display the result
    cout << "The total number of all combinations is " << count;

    return 0;
}

