/*
 *1.12 (Average sales in kilograms) Assume a vendor sells 5553 grams of grocery 
 * in 2 hours, 9 minutes and 30 seconds. Write a program that displays the 
 * average sale in kilograms per hour (Note that 1 kilogram is 1000 grams).
 */

/* 
 * File:   Exercise12_01.cpp
 * Author: BASSAM FARAMAWI 
 *
 * Created on March 17, 2018, 12:14 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {

    //Compute the average sale then display results
    cout << "The average sale = " << (5553.0 / 1000) / (2 + 9.0/60 + 30.0/3600) 
            << " kg/hour" <<endl;
    return 0;
}

