/*
 *5.42 (Financial application: find the profit-per-item) Rewrite Programming 
Exercise 5.39 as follows:
   ■ Use a while loop instead of a do-while loop.
   ■ Let the shop owner enter PROFIT_DESIRED instead of fixing it as a constant.
 */

/* 
 * File:   Exercise42_05.cpp
 * Author: Administrator
 *
 * Created on October 9, 2018, 10:58 AM
 */

#include <iostream> // For the cin & cout functions
#include <iomanip>  // For stream manipulators

using namespace std;

int main() {
    cout << "Enter the desired profit:";
    int PROFIT_DESIRED;
    cin >> PROFIT_DESIRED;
    
    int salesQuantity = 1,  // Initialize the sales quantity
            profit = 0;  // Initialize the profit needed
    
    while(profit < PROFIT_DESIRED) {
        salesQuantity++;
        if(salesQuantity > 5000)
            profit = (salesQuantity - 5000) * 5 + 4000 * 2 +  1000 * 1;
        else if(salesQuantity > 1000)
            profit = (salesQuantity - 1000) * 2 + 1000 * 1;
        else 
            profit = salesQuantity * 1;
        
    }
    
    // Display the result
    cout << "You need to make " << fixed << setprecision(2) << salesQuantity << 
            " quantity per year to make a profit of $" << PROFIT_DESIRED;

    return 0;
}

