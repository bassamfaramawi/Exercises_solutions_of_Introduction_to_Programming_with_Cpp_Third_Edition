/*
 *5.34 (Game: Prediction) Revise Exercise 3.14 to generate a random three-digit
number. The three digits in the number must be distinct. (Hint: Generate the 
first digit. Use a loop to repeatedly generate the second and third digits until 
they are different from other digits.)
 */

/* 
 * File:   Exercise34_05.cpp
 * Author: Administrator
 *
 * Created on October 2, 2018, 2:11 PM
 */

#include <iostream> // For the cin & cout functions
#include <cstdlib>   // For rand and srand functions
#include <ctime>    // For time function

using namespace std;

int main() {
     // Generate the first digit of a number
    srand(time(0));
    int numberDigit1 = rand() % 10;
    
    int numberDigit2 = numberDigit1;  // Initialize the second digit
    int numberDigit3 = numberDigit1;  // Initialize the third digit
        
        do {
            // Generate the second and third digits of the number
            numberDigit2 = rand() % 10;
            numberDigit3 = rand() % 10;
        } while(numberDigit1 == numberDigit2 || numberDigit2 == numberDigit3 
                || numberDigit1 == numberDigit3);
    
    // Prompt the user to enter a three digit number
    cout << "Enter a prediction of a three digit number: ";
    int prediction;
    cin >> prediction;   // Receive the value
    
    // Get digits from prediction
    int predictionDigit1 = prediction / 100,
            predictionDigit2 = prediction % 100 / 10,
            predictionDigit3 = prediction % 10;
    
    // Check the accuracy prediction and display the result
    cout << "The generated number is " << numberDigit1 << numberDigit2 << 
            numberDigit3;
    
    if(numberDigit1 == predictionDigit1 && numberDigit2 == predictionDigit2 && 
            numberDigit3 == predictionDigit3)
        cout <<".Your prediction accuracy is 100%";
    
    else if(numberDigit1 == predictionDigit1 || numberDigit1 == predictionDigit2 
            || numberDigit1 == predictionDigit3 || 
            numberDigit2 == predictionDigit1 || numberDigit2 == predictionDigit2 
            || numberDigit2 == predictionDigit3 ||
            numberDigit3 == predictionDigit1 || numberDigit3 == predictionDigit2 
            || numberDigit3 == predictionDigit3)
          cout <<".Your prediction accuracy is 50%";
    
    else 
         cout <<".Your prediction accuracy is 0%";

    return 0;
}

