/*
 *5.11 (Find the two lowest prices) Write a program that prompts the user to 
 enter the number of items and each item’s name and price, and finally displays
the name and price of the item with the lowest score and the item with the
second-lowest price.
 */

/* 
 * File:   Exercise11_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on September 29, 2018, 3:34 PM
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
    
    // Initialize the 1'st and 2'nd lowest price item names
    string lowestName = "", 
            secondLowestName = "";
    
     // Initialize the 1st and 2'nd prices
    double lowestPrice = DBL_MAX,
            secondLowestPrice = DBL_MAX;
    
    for(int n = 1; n <= itemsNumber; n++) { // Loop for items prices
        cout << "Enter the name of item no." << n << ": ";
        string itemName;
        cin >> itemName;
        
        cout << "Enter the item price: ";
        double itemPrice;
        cin >> itemPrice;
        
        // Determine the 1st and 2nd highest score student
            if(itemPrice < lowestPrice && itemPrice < secondLowestPrice) {  
                secondLowestName = lowestName;
                secondLowestPrice = lowestPrice;
                
                lowestName = itemName;
                lowestPrice = itemPrice;
            }
            else if(itemPrice < secondLowestPrice) {
                secondLowestName = itemName;
                secondLowestPrice = itemPrice;
            }
        }
    
    // Display the result
        cout << "The item with the lowest price is " << lowestName << 
                " with price = " << lowestPrice << endl;
        
        cout << "The item with the second lowest price is " <<  
                secondLowestName << " with price = " << secondLowestPrice;

    return 0;
}

