/*
 **5.27 (Compute p) You can approximate p by using the following series:
p = (6 * (1 + 1/4 + 1/9 + 1/16 + 1/25 + ... + 1/n2))^0.5
 */

/* 
 * File:   Exercise27_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on October 1, 2018, 5:20 PM
 */

#include <iostream> // For the cin & cout functions
#include <cmath>  // For math functions

using namespace std;

int main() {
     for(int n = 100; n <=  600; n += 100) {
         double PI,
                 sum = 0;
         
         cout << "PI for (n = " << n << "): ";
         
         for(int i = n; i >= 1; i--)
                sum += (1.0 / (i * i));
         PI = sqrt(6 * sum);
         
         cout << PI << endl;
     }

    return 0;
}

