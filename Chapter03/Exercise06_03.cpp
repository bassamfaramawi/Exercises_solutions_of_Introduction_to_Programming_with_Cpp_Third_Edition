/*
*3.6 (Health application: BMI) Revise Listing 3.4, ComputeAndInterpretBMI.java, 
to let the user enter weight, feet, and inches. For example, if a person is 5 
feet and 10 inches, you will enter 5 for feet and 10 for inches.
 */

/* 
 * File:   Exercise06_03.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on August 13, 2018, 2:15 AM
 */

#include <iostream>      // for cin & cout functions

using namespace std;

int main() {
    //Prompt the user to enter weight in pounds
    cout << "Enter weight in pounds: ";
    double weight;
    
    cin >> weight;  // Receive value
    
    // Prompt the user to enter feet
    cout << "Enter feet: ";   
    double feet;
    
    cin >> feet;   // Receive value
    
    //Prompt the user to enter inches
    cout << "Enter inches: ";
    double inches;
    
    cin >> inches;   // Receive value
    
    const double KILOGRAMS_PER_POUND = 0.45359237;   //Kilograms per pound
    const double METERS_PER_INCH = 0.0254;   //Meters per inch
    const double FEET_PER_METER = 3.280839895;   //Feet per meter
    
    // Pounds to kilograms
    double kilogrames = weight * KILOGRAMS_PER_POUND, 
            //(Feet + inches) to meters
            meters = (feet / FEET_PER_METER) + (inches * METERS_PER_INCH),
            // Calculate BMI
            BMI = kilogrames / (meters * meters);
    
    //Display the result
    cout << "BMI is " << BMI << endl;
    
    if(BMI < 18.5)
        cout << "Underweight";
    else if(BMI < 25)
         cout << "Normal";
    else if(BMI < 30)
         cout << "Overweight";
    else 
         cout << "Obese";


    return 0;
}

