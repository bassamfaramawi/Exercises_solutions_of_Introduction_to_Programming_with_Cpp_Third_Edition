/*
 * *2.17 (Science: wind-chill temperature) How cold is it outside? The temperature 
   alone is not enough to provide the answer. Other factors including wind speed, 
   relative humidity, and sunshine play important roles in determining coldness 
   outside. In 2001, the National Weather Service (NWS) implemented the new 
   wind-chill temperature to measure the coldness using temperature and wind 
   speed. The formula is
          twc = 35.74 + 0.6215ta - 35.75v0.16 + 0.4275tav0.16
   where ta is the outside temperature measured in degrees Fahrenheit and v is 
   the speed measured in miles per hour. twc is the wind-chill temperature. The 
   formula cannot be used for wind speeds below 2 mph or temperatures below 
   -58 ºF or above 41ºF.
Write a program that prompts the user to enter a temperature between -58 ºF and
41ºF and a wind speed greater than or equal to 2 and displays the wind-chill 
temperature. Use Math.pow(a, b) to compute v0.16
 */

/* 
 * File:   Exercise17_02.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on March 25, 2018, 2:59 AM
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
   
    double ta, v, twc;
    
    // Asking for entering inputs
    cout << "Enter the temperature in Fahrenheit between -58°F and 41°F: ";
    cin >> ta;
    
    cout << "Enter the wind speed (>=2) in miles per hour: ";
    cin >> v;
    
    // Calculate the values
    twc = 35.74 + 0.6215 * ta - 35.75 * pow(v, 0.16) + 0.4275* ta* pow(v, 0.16);
        
    // Display the result
    cout << "The wind chill index is " << (int)(twc * 100000) / 100000.0 << endl;

    return 0;
}

