/*
 * 1.10 (Average sales in grams) Assume a vendor sells 6 kilograms of grocery in 15 minutes and
30 minutes and 30 seconds. Write a program that displays the average sale in grams
per hour (Note that 1 kilogram is 1000 grams).
 */

/* 
 * File:   Exercise10_01.cpp
 * Author: BASSAM FARAMAWI 
 *
 * Created on March 16, 2018, 11:56 PM
 */

#include <iostream>

using namespace std;

int main() {
    //Compute and displays the average sale in grams per hour
    cout << "The average sale = " << (6 * 1000) / (15 + 30.0/60 + 30.0/3600) 
            << " grams/hour" << endl;

    return 0;
}

