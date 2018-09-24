/*
 5.2 (Repeat additions) Listing 5.4, SubtractionQuizLoop.java, generates five random
subtraction questions. Revise the program to generate ten random addition questions
for two integers between 1 and 15. Display the correct count and test time.
 */

/* 
 * File:   Exercise02_05.cpp
 * Author: Administrator
 *
 * Created on September 24, 2018, 10:52 AM
 */

#include <iostream>  // For the cin & cout functions
#include <cstdlib>  // For the rand and srand funtions
#include <ctime>  // For the time function
#include <string> // For string function

using namespace std;

int main() {
    const int NUMBER_OF_QUESTIONS = 10; // Number of questions
    int correctCount = 0; // Count the number of correct answers
    int count = 0; // Count the number of questions
    long startTime = time(0);
    string output = " "; // output string is initially empty
    
    srand(time(0));  //Set the seed of rand function
    
    while (count < NUMBER_OF_QUESTIONS) {
         // 1. Generate two random integers between 1 and 15
         int number1 = (int)(rand() % 15) + 1;
         int number2 = (int)(rand() % 15) + 1;
    
         // 2. Prompt the student to answer "What is number1 + number2?"
         cout << "What is " << number1 << " + " << number2 << "? ";
         int answer;
         cin >> answer;
        
         // 3. Grade the answer and display the result
         if (number1 + number2 == answer) {
             cout << "You are correct!" << endl;
             correctCount++; // Increase the correct answer count
         }
         else
             cout << "Your answer is wrong." << endl << number1 << " + " 
                     << number2 << " should be " << (number1 + number2);
         
         // Increase the question count
         count++;
         
         output = output + "\n" + number1 + "+" + number2 + "=" + answer +
                 ((number1 + number2 == answer) ? " correct" : " wrong");
        }
    
    long endTime = time(0);
    long testTime = endTime - startTime;
    
    cout << "Correct count is " << correctCount << endl << "Test time is " 
            << testTime / 1000 << " seconds" << endl << output;

    return 0;
}

