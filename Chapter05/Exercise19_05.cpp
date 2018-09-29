/*
 5.19 (Display pyramid) Write a program that prompts the user to enter an integer 
 from 1 to 15 and displays a pyramid,
 */

/* 
 * File:   Exercise19_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on September 29, 2018, 4:54 PM
 */

#include <iostream> // For the cin & cout functions
#include <cmath>  // For math functions

using namespace std;

int main() {
    //Prompt the user to enter an integer from 1  to 15
    cout << "Enter an integer from 1 to 15: ";
    int number;
    cin >> number;
    
    for(int n = 1; n <= number; n++) { // A for loop for printing the table
        for(int k = - number; k <= number; k++) {
            if(k == 0 || k == 1)
                cout << "";
            else if(abs(k) <= n)
                cout << abs(k) << " ";
            else
                cout << "  ";
        }
        
        cout << endl;
    }
    
    return 0;
}

