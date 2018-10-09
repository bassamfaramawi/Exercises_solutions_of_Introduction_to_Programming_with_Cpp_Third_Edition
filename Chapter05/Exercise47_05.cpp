/*
 **5.45 (Statistics: compute mean and standard deviation) In business applications, 
you are often asked to compute the mean and standard deviation of data. The mean is
simply the average of the numbers. The standard deviation is a statistic that tells
you how tightly all the various data are clustered around the mean in a set of data.
For example, what is the average age of the students in a class? How close are the
ages? If all the students are the same age, the deviation is 0.
Write a program that prompts the user to enter ten numbers, and displays the
mean and standard deviations of these numbers using the following formula:
       mean = Exi / n = (x1 + x2 + .. + xn) / n
       deviation = ( (E(xi^2) - E(xi)^2 / n) / (n -1))^ 0.5
 */

/* 
 * File:   Exercise47_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on October 9, 2018, 11:40 PM
 */

#include <iostream> // For the cin & cout functions
#include <cmath>  // For math functions

using namespace std;

int main() {
    //Prompt the user to enter ten numbers
    cout << "Enter ten numbers: ";
    
    int n = 10;  // Ten numbers
    
    double sumOfX = 0,  // Initialize the summation of numbers
            sumOfXSquare = 0,  // Initialize the summation of square of numbers
            mean,
            deviation,
            x;
    
    for(int i = 1; i <= n; i++) {  // Receive the 10 numbers
        cin >> x;
        sumOfX += x;
        sumOfXSquare += pow(x, 2);
    }
    
    // Calculate the mean and the standard deviation
    mean = sumOfX / n;
    
    deviation = sqrt((sumOfXSquare - sumOfX * sumOfX / n)/ (n - 1));
    
    // Display the result
    cout << "The mean is " << mean << endl;
    cout << "The standard deviation is " << (int)(deviation * 1E5) / 1E5;

    return 0;
}

