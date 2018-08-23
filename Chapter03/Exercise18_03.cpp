/*
 3.18 (Game: Multiplication for four numbers) Listing 3.4, SubtractionQuiz.cpp,
 *     randomly generates a subtraction question. Revise the program to randomly 
 *     generate a multiplication question with four integers less than 5.
 */

/* 
 * File:   Exercise18_03.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on August 22, 2018, 12:44 AM
 */

#include <iostream>  // For cout & cin functions
#include <ctime> // for time function
#include <cstdlib> // for rand and srand functions

using namespace std;

int main() {
    // 1. Generate four random integers less than 5
    srand(time(0));
    int number1 = rand() % 5;
    int number2 = rand() % 5;
    int number3 = rand() % 5;
    int number4 = rand() % 5;
    
    // 2. Prompt the student to answer "what is number1 * number2 * number3 * number4?"
    cout << "What is " << number1 << " * " << number2 << " * " << number3 
            << " * " << number4 << "? ";
    int answer;
    cin >> answer;
    
    // 3. Grade the answer and display the result
    if (number1 * number2 * number3 * number4 == answer)
        cout << "You are correct!";
    else
        cout << "Your answer is wrong. " << number1 << " * " << number2 << " * " 
                << number3 << " * " << number4 << " should be " 
                << (number1 * number2 * number3 * number4) << endl;

    return 0;
}

