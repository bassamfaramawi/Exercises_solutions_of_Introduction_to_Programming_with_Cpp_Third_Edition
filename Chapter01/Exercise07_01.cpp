/*
 * 1.7 (Approximate p) p can be computed using the following formula:
   p = (6 * (1 + 1/4 +1/9 +1/6 + 1/25 + ...))^^0.5
   Write a program that displays the result of
   (6 * (1 + 1/4 +1/9 +1/6 + 1/25 ))^^0.5
   and (6 * (1 + 1/4 +1/9 +1/6 + 1/25 + 1/36))^^0.5
   2. Use 1.0 instead of 1 in your program.
 */

/* 
 * File:   Exercise07_01.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on July 18, 2018, 4:32 PM
 */

#include <iostream>
#include <math.h>

using namespace std;

/*
 * 
 */
int main() {
    
    //Compute then display the result
    cout << "(6 * (1 + 1/4 + 1/9 + 1/6 + 1/25 ))^^0.5 = ";
    cout << pow( (6 * (1 + 1/4 + 1/9 + 1/6 + 1/25) ), 0.5) << endl;
    
    cout << "(6 * (1 + 1/4 + 1/9 + 1/6 +1/25 + 1/36))^^0.5 = ";
    cout << pow( (6 * (1 + 1/4 + 1/9 + 1/6 + 1/25 + 1/36) ), 0.5) << endl;

    return 0;
}

