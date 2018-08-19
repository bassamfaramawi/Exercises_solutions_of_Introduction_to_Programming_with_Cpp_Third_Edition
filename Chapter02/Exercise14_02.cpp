/*
 * *2.14 (Health application: computing BMI) Body Mass Index (BMI) is a measure 
    of health on weight. It can be calculated by taking your weight in kilograms 
    and dividing by the square of your height in meters. Write a program that 
    prompts the user to enter a weight in pounds and height in inches and displays 
    the BMI. Note that one pound is 0.45359237 kilograms and one inch is 0.0254 
    meters.
 */

/* 
 * File:   Exercise14_02.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on March 25, 2018, 2:37 AM
 */

#include <iostream>

using namespace std;

int main() {
    
    double weight , height;
    
    // Asking for entering inputs
    cout << "Enter weight in pounds: ";
    cin >> weight;
    
    cout << "Enter height in inchss: ";
    cin >> height;
    
    // Calculate and the values
    weight *= 0.45359237;
    height *= 0.0254;
        
    // Display the result
    cout << "BMI is " << (int)(weight / (height * height) * 10000) / 10000.0;

    return 0;
}

