/*
 **3.14 (Game: Prediction) Write a program that generates a random two-digit integer.
The program prompts the user to predict the generated number by entering a twodigit
integer, and then determines the accuracy of the user’s prediction according
to the following rules:
If the user’s prediction matches the generated number exactly, the accuracy is
100%. If one digit in the user’s predicted number matches a digit in the generated
number, the accuracy is 50%. If none of the digits in user’s predicted number
matches with the generated number, the accuracy is 0%.
 */

/* 
 * File:   Exercise14_03.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on August 19, 2018, 12:20 PM
 */

#include <iostream>   // For cout & cin functions
#include <cstdlib>   // For rand and srand functions
#include <ctime>    // For time function

using namespace std;

int main() {
    // Generate a number
    srand(time(0));
    int number = rand() % 100;
    
    // Prompt the user to enter a tow digit number
    cout << "Enter a prediction of a tow digit number: ";
    int prediction;
    
    cin >> prediction;   // Receive the value
    
    // Get digits from number
    int numberDigit1 = number / 10,
            numberDigit2 = number % 10,
    
    // Get digits from prediction
            predictionDigit1 = prediction / 10,
            predictionDigit2 = prediction % 10;
    
    // Check the accuracy prediction and display the result
    cout << "The generated number is " << number ;
    
    if(prediction == number)
        cout <<".Your prediction accuracy is 100%";
    
    else if (numberDigit1 == predictionDigit1 || numberDigit1 == predictionDigit2 
            || numberDigit2 == predictionDigit1 || numberDigit2 == predictionDigit2)
          cout <<".Your prediction accuracy is 50%";
    
    else 
         cout <<".Your prediction accuracy is 0%";

    return 0;
}