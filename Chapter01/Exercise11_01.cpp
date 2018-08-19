/*
 1.11 (Population projection) The U.S. Census Bureau projects population based on the
following assumptions:
n One birth every 7 seconds
n One death every 13 seconds
n One new immigrant every 45 seconds
Write a program that displays the population for each of the next five years. Assume
the current population is 312,032,486 and one year has 365 days. Hint: In C++, if two
integers perform division, the result is the quotient. The fractional part is truncated.
 */

/* 
 * File:   Exercise11_01.cpp
 * Author: BASSAM FARAMAWI 
 *
 * Created on March 17, 2018, 12:01 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    
    //Compute the population and print the results
    cout << "The population for :" << endl;
    cout << " year1 = " << 312032486 + 365 * 12 * 3600 * 
            (1.0/7 + 1.0/45 - 1.0/13) << endl;
    cout << " year2 = " << 312032486 + 365 * 12 * 3600 * 2 *
            (1.0/7 + 1.0/45 - 1.0/13) << endl;
    cout << " year3 = " << 312032486 + 365 * 12 * 3600 * 3 *
            (1.0/7 + 1.0/45 - 1.0/13) << endl;
    cout << " year4 = " << 312032486 + 365 * 12 * 3600 * 4 *
            (1.0/7 + 1.0/45 - 1.0/13) << endl;
    cout << " year5 = " << 312032486 + 365 * 12 * 3600 * 5 *
            (1.0/7 + 1.0/45 - 1.0/13) << endl;

    return 0;
}

