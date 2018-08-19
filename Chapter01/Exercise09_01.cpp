/*
 1.9 (Area and perimeter of a square) Write a program that displays the area and 
      perimeter of a square that has a side of 5.2 using the following formula:
      area = (side)2 and perimeter = 4 * side
 */

/* 
 * File:   Exercise09_01.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on July 18, 2018, 6:36 PM
 */

#include <iostream>
#include <math.h>

using namespace std;

/*
 * 
 */
int main() {
    
    //Compute and display area
    cout << "Area = ";
    cout << pow(5.2, 2) << endl;
    
    //Compute and display perimeter
    cout << "Perimeter = ";
    cout << 4 * 5.2 << endl;
    
    return 0;
}

