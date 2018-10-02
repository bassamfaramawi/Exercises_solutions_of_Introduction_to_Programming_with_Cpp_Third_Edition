/*
 **5.35 (Fibonacci Series) The Fibonacci series is a series that begins with 0 
and 1 and has the property that each succeeding term is the sum of the two 
preceding terms. For example, the third Fibonacci number is 1 which is sum of 0 
and 1. The next is 2, which is a sum of 1 + 1. Write a program that displays the 
first ten numbers in a Fibonacci series.
 */

/* 
 * File:   Exercise35_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on October 2, 2018, 4:53 PM
 */

#include <iostream> // For the cin & cout functions

using namespace std;

int main() {
    int count = 3;  // Initialize the count from the third number
    double fib = 1;  // Initialize the fib number
    int previous = 1,  // The second number
            lastPrevious = 0;  // The first number
            
    cout << "The first ten numbers in a Fibonacci series is: 0, 1, ";
    
    while(count <= 10){
        fib = previous + lastPrevious;
        cout << fib <<(count == 10 ? "" : ", ");
        lastPrevious = previous;
        previous = fib;
        count++;
    }

    return 0;
}

