/*
 **5.54 (Sum, average and product of numbers) Write a program that calculates
the sum, average and product of numbers in a file named numbers.txt.
 */

/* 
 * File:   Exercise54_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on October 10, 2018, 5:32 PM
 */

#include <iostream> // For the cin & cout functions
#include <fstream>  // For file functions

using namespace std;

int main() {
    ifstream input("numbers.txt");  // Open numbers.txt file
    
    double sum = 0;  // Initialize sum
    double average;
    double number;
    int count = 0;
    while(!input.eof()) {  // Continue if not the end of the file
        input >> number;
        cout << number << " ";  // Review the numbers in the file
        sum += number;
        count++;
    }
    average = sum / count;
    
    // Display the result
    cout << "\nSum = " << sum <<"\nAverage = " << average;

    return 0;
}

