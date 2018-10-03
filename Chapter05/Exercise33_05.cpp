/*
 *5.33 (Financial application: compute CD value) Suppose you put $10,000 into a 
CD with an annual percentage yield of 5.75%. After one month, the CD is worth
10000 + 10000 * 5.75 / 1200 = 10047.92
After two months, the CD is worth
10047.91 + 10047.91 * 5.75 / 1200 = 10096.06
After three months, the CD is worth
10096.06 + 10096.06 * 5.75 / 1200 = 10144.44
and so on.
Write a program that prompts the user to enter an amount (e.g., 10000), the
annual percentage yield (e.g., 5.75), and the number of months (e.g., 18) and
displays a table as shown in the sample run.
 */

/* 
 * File:   Exercise33_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on October 2, 2018, 12:58 AM
 */

#include <iostream> // For the cin & cout functions
#include <iomanip>  // For stream manipulators

using namespace std;

int main() {
    //Prompt the user to enter the initial deposit amount
    cout << "Enter the initial deposit amount: ";
    double amount;
    cin >> amount;
    
    //Prompt the user to enter the annual percentage yield
    cout << "Enter annual percentage yield: ";
    double annualPercentageYield;
    cin >> annualPercentageYield;
    
    //Prompt the user to enter the number of months
    cout << "Enter maturity period (number of months): ";
    int numberOfMonths;
    cin >> numberOfMonths;
    
    double CDValue = amount;  // Initialize monthly amount
    
    // Print the header
    cout << endl << left << setw(8) << "Month" << setw(8) << 
            "CD Value" << endl;
    
    // Print the table body
    for(int n = 1; n <= numberOfMonths; n++)  {
        CDValue *= (1 + annualPercentageYield / 1200);
        cout << left << setw(8) << n << fixed << setprecision(2) << setw(8) 
                << CDValue << endl;
    }

    return 0;
}

