/*
 * 1.8 (Area and perimeter of an equilateral triangle) Write a program that displays 
       the area and perimeter of an equilateral triangle that has its three sides as 
       9.2, using the following formula:
       area = 1.732 * (side1)2/ 4
       perimeter = 3 * side1
 */

/* 
 * File:   Exercise08_01.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on July 18, 2018, 6:27 PM
 */

#include <iostream>
#include <math.h>
using namespace std;

/*
 * 
 */
int main() {
    
    //Compute and print area
    cout << "Area = "; 
    cout << 1.732 * pow(9.2, 2) / 4 << endl;
    
    //Compute and print perimeter
    cout << "Perimeter = "; 
    cout << (3 * 9.2) << endl;
    
    return 0;
}

