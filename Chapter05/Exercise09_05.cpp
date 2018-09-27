/*
**5.9 (Financial application: compute future apartment rent) Suppose that the rent 
 for an apartment is $1000 this year and increases 3% every year. Write a program 
 that computes the rent in five years and the total rent for one year starting 
 five years from now.
 */

/* 
 * File:   Exercise09_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on September 27, 2018, 5:22 PM
 */

#include <iostream> // For the cin & cout functions
#include <iomanip>  // For stream manipulators

using namespace std;

int main() {
    const int NUMBER_OF_YEARS = 14;  // 10 Years + 4 years after it
    double tuition = 10000;   // initialize tuition
    double increaseRate = 0.05;   // Every year increment
    
    for(int n = 1; n <= NUMBER_OF_YEARS; n++) {
        tuition *= (1 + increaseRate);
        if(n == 10)  // Display the tuition after 10 years
            cout << "The tuition after ten years is " << fixed << setprecision(2) 
                    << tuition << endl;
    }
    
    // Display the total cost of 4 years after the tenth year
    cout << "Total cost of 4 years after the tenth year: " << fixed 
            << setprecision(2) << tuition << endl;
    
    return 0;
}

