/*
 3.10 (Game: Multiplication quiz) Listing 3.4, SubtractionQuiz.cpp, randomly
      generates a subtraction question. Revise the program to randomly generate a 
      multiplication question with two integers less than 50.
 */

/* 
 * File:   Exercise10_03.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on August 14, 2018, 2:13 AM
 */

#include <iostream>   // For cin & cout functions
#include <cstdlib>    // For rand and srand functions
#include <ctime>      // For time function

using namespace std;

int main() {
    // 1. Generate two random integers less than 50
    srand(time(0));
    int number1 = rand() % 50;
    int number2 = rand() % 50;
   
    // 2. Prompt the student to answer "what is number1 * number2?"
    cout << "What is " << number1 << " * " << number2 << "? ";
    int answer;
    cin >> answer;
   
    // 3. Grade the answer and display the result
    if (number1 * number2 == answer)
    cout << "You are correct!";
    else
    cout << "Your answer is wrong. " << number1 << " * " << number2
    << " should be " << (number1 * number2) << endl;
    return 0;
}

