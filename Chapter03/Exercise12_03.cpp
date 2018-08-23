/*
 3.12 (Game: Even or Odd) Write a program that lets the user guess whether a 
   randomly generated integer would be even or odd. The program randomly generates 
   an integer and divides it by 2. The integer is even if the remainder is 0, 
   otherwise odd. The program prompts the user to enter a guess and reports 
   whether the guess is correct or incorrect.
 */

/* 
 * File:   Exercise12_03.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on August 14, 2018, 12:30 PM
 */

#include <iostream>   // For  cout & cin functions
#include <cstdlib>   // For rand and srand functions
#include <ctime>    // For time function

using namespace std;

int main() {
    // Generate a number
    srand(time(0));
    int number = rand() % 100;
    
    // Prompt the user to enter an integer for even or odd
    cout << "Enter a guess 0 for even and any other integer for odd: ";
    int guess;
    
    cin >> guess;   // Receive the value
    
    // Check the guess and display the result
    cout << "Your guess is " << (guess == 0 ? "even" : "odd") << " and it is " 
            << ((number % 2 == 0 && guess == 0) || (number % 2 != 0 && guess != 0) 
            ? "correct" : "incorrect");

    return 0;
}

