/*
 5.10 (Find the lowest price) Write a program that prompts the user to enter the 
 number of items and each item’s name and price, and finally displays the name 
 and price of the item with the lowest price.
 */

/* 
 * File:   Exercise10_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on September 27, 2018, 11:39 PM
 */

#include <iostream> // For the cin & cout functions
#include <iomanip>  // For stream manipulators
#include <cmath>  // For math functions
#include <string>  // For string function
#include <cfloat>  // For the double max and min values

using namespace std;

int main() {
    //Prompt the user to enter the number of items
    cout << "Enter the number of items: ";
    int itemsNumber;
    
    cin >> itemsNumber;
    
    string lowestName = "";  // Initialize the lowest price item name
    double lowestPrice = DBL_MAX;  // Initialize the lowest price
    
    for(int n = 1; n <= itemsNumber; n++) { // Loop for items prices
        cout << "Enter the name of item no." << n << ": ";
        string itemName;
        cin >> itemName;
        
        cout << "Enter the item price: ";
        double itemPrice;
        cin >> itemPrice;
        
        if(itemPrice < lowestPrice) {  // Determine the lowest price item
            lowestName = itemName;
            lowestPrice = itemPrice;
        }
    }
    
    // Display the result
    cout << "The item with the lowest price is " << lowestName 
            << " with price = " << lowestPrice;

    return 0;
}

