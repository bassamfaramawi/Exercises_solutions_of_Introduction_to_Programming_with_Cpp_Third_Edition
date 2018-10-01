/*
 *5.22 (Display non-prime numbers between 1 and 100) Modify Listing 5.17 to 
 display all the non-prime numbers between 1 and 100. Display five non-prime 
 numbers per line. Numbers are separated by exactly one space.
 */

/* 
 * File:   Exercise22_05.cpp
 * Author: Administrator
 *
 * Created on September 30, 2018, 2:06 PM
 */

#include <iostream> // For the cin & cout functions
#include <cmath>  // For math functions

using namespace std;

int main() {
    const int NUMBER_OF_PRIMES_PER_LINE = 5; // Display 5 per line
    int count = 0; // Count the number of prime numbers
    int number = 2; // A number to be tested for primeness
    
    cout << "The non-prime numbers between 1 and 100 are:"  << endl;
    
    // Repeatedly find prime numbers
    while (number < 100) {
        // Assume the number is prime
        bool isPrime = true; // Is the current number prime?
    
        // Test whether number is prime
        for (int divisor = 2; divisor <= number / 2; divisor++) {
            // Display the non-prime number and increase the count
            if (number % divisor == 0) { // If true, number is not prime
                isPrime = false; // Set isPrime to false
                count++; // Increase the count
                if (count % NUMBER_OF_PRIMES_PER_LINE == 0) 
                    // Display the number and advance to the new line
                    cout << number << endl;
        
                else
                    cout << number << " ";
                break; // Exit the for loop
            }
        }
    
    // Check if the next number is non-prime
    number++;
    }

    return 0;
}

