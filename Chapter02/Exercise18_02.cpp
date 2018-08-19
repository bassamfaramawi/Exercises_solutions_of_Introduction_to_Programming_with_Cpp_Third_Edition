/*
 *2.18 (Print a table) Write a program that displays the following table. Cast 
  floating point numbers into integers.
     a b pow(a, b)
     1 2 1
     2 3 8
     3 4 81
     4 5 1024
     5 6 15625
 */

/* 
 * File:   Exercise18_02.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on March 25, 2018, 3:06 AM
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    // Display the table
    cout << "    a    b    pow(a, b)" << endl;
    cout << "    1    2    " << (int)pow(1, 2) << endl;
    cout << "    2    3    " << (int)pow(2, 3) << endl;
    cout << "    3    4    " << (int)pow(3, 4) << endl;
    cout << "    4    5    " << (int)pow(4, 5) << endl;
    cout << "    5    6    " << (int)pow(5, 6) << endl;

    return 0;
}

