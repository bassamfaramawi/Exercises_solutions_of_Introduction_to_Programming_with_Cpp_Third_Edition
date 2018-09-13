/*
 *4.22 (Financial application: payroll) Write a program that reads the following 
information and prints a payroll statement:
Employee’s name (e.g., Smith)
Number of hours worked in a week (e.g., 10)
Hourly pay rate (e.g., 9.75)
Federal tax withholding rate (e.g., 20%)
State tax withholding rate (e.g., 9%)
 */

/* 
 * File:   Exerise22_04.cpp
 * Author: Administrator
 *
 * Created on September 12, 2018, 1:37 PM
 */

#include <iostream> // For cin & cout functions
#include <string> // For string function

using namespace std;

int main() {
    // Prompt the user to enter Employee’s name,
    cout << "Enter employee's name: ";
    string name;
    cin >> name;
    
    // Number of hours worked in a week,
    cout << "Number of hours worked in a week: ";
    double weeklyHours;
    cin >> weeklyHours;

    // Hourly pay rate,
    cout << "Hourly pay rate: ";
    double hourlyPayRate;
    cin >> hourlyPayRate;
    
    // Federal tax withholding rate,
    cout << "Federal tax withholding rate: ";
    double federalTax;
    cin >> federalTax;
    
    // And State tax withholding rate
    cout << "State tax withholding rate: ";
    double stateTax;
    cin >> stateTax;
    
    // Calculate Gross Pay,
    double grossPay = weeklyHours * hourlyPayRate;
    
    //Federal Withholding,
    double federalWithholding = grossPay * federalTax;
    
    // State Withholding,
    double stateWithholding = grossPay * stateTax;
    
    // Total Deduction,
    double totalDeduction = federalWithholding + stateWithholding;
    
    // And Net Pay
    double netPay = grossPay - totalDeduction;

    // Display the results
    cout << "\nEmployee Name:" << name <<
            "\nPay Rate: $" << hourlyPayRate <<
            "\nGross Pay: $" << grossPay <<
            "\nDeductions:" <<
            "\n  Federal Withholding (20.0%): $" << federalWithholding <<
            "\n  State Withholding (9.0%): $" << stateWithholding <<
            "\n  Total Deduction: $" << totalDeduction <<
            "\nNet Pay: $" << netPay;

    return 0;
}

