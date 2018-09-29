/*
 *5.17 (Display the ASCII character table) Write a program that prints all the 
 uppercase characters of the ASCII character table. Display 5 characters per line. 
 The ASCII table is shown in Appendix B. Characters are separated by exactly one
space.
 */

/* 
 * File:   Exercise17_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on September 29, 2018, 4:37 PM
 */

#include <iostream> // For the cin & cout functions

using namespace std;

int main() {
    const int NUMBERS_PER_LINE = 10;  // Constant numbers per line
    int startASCII = (int)'!'; // From the number
    int endASCII = (int)'~';  // To the number
    
    cout << "The ASCII table from ! to ~:" << endl;
    
    for(int n = startASCII; n <= endASCII; n++)  
        // Display the result
        cout << (char)n << ((n - startASCII + 1) % NUMBERS_PER_LINE == 0 ? "\n" : " ");
    

    return 0;
}

