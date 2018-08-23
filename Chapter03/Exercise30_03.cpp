/*
 *3.30 (Financial: compare costs) Suppose you shop for rice in two different 
packages. You would like to write a program to compare the cost. The program 
prompts the user to enter the weight and price of the each package and displays 
the one with the better price.
 */

/* 
 * File:   Exercise30_03.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on August 23, 2018, 6:19 PM
 */

#include <iostream> // For cin & cout functions

using namespace std;

int main() {
    // Asking to enter weight and price for package 1:
    cout << "Enter weight and price for package 1: ";
    double weight1, price1;
    
    cin >> weight1 >> price1;  // Receive values
    
    
    double priceOfKg1 = price1 / weight1;  // Calculate price of 1st weight
    
    // Asking to enter weight and price for package 2:
    cout << "Enter weight and price for package 2: ";
    double weight2, price2;
    
    cin >> weight2 >> price2;  // Receive values
    
    
    double priceOfKg2 = price2 / weight2;  // Calculate price of 2nd weight
    
    // Choose the cheapest price per KG
    if(priceOfKg1 < priceOfKg2)
        cout << "Package 1 has a better price.";
    else if(priceOfKg1 > priceOfKg2)
        cout << "Package 2 has a better price.";
    else
        cout << "Two packages have the same price.";

    return 0;
}

