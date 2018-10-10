/*
 *5.39 (Financial application: find the profit-per-item) You have just started a 
new stationary shop. Your profit-per-item depends on the total quantity of item 
sold. The scheme shown below is used to determine the total profit:
 
            Quantity      Profit-per-item
            ____________________________________
            0–1000              $1
            1001–5000           $2
            5001 and            above $5
 
Note that this is a graduated profit. The profit for selling up to 1000 items is 
$1, for next 4000 items is $2 and beyond that is $5. If the total quantity of item 
sold is 10000, the profit is 1000 * $1 + 4000 * $2 + 5000 * $5 = $34000.
Your goal is to make $50,000 a year. Write a program that uses a do-while
loop to find out the minimum quantity of item you have to sell in order to make
$50,000.
 */

/* 
 * File:   Exercise39_05.cpp
 * Author: Administrator
 *
 * Created on October 9, 2018, 9:43 AM
 */

#include <iostream> // For the cin & cout functions
#include <iomanip>  // For stream manipulators

using namespace std;

int main() {
    int profitPerYear = 50000;  // The profit target in a year
    int salesQuantity = 1,  // Initialize the sales quantity
            profit = 0;  // Initialize the profit needed
    
    do {
        salesQuantity++;
        if(salesQuantity > 5000)
            profit = (salesQuantity - 5000) * 5 + 4000 * 2 +  1000 * 1;
        else if(salesQuantity > 1000)
            profit = (salesQuantity - 1000) * 2 + 1000 * 1;
        else 
            profit = salesQuantity * 1;
        
    } while(profit < profitPerYear);
    
    // Display the result
    cout << "You need to make " << fixed << setprecision(2) << salesQuantity << 
            " quantity per year to make a profit of $50000";

    return 0;
}

