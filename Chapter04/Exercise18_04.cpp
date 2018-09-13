/*
 *4.18 (Random strings) Write a program that generates a random string with six 
  lowercase letters.
 */

/* 
 * File:   Exercise18_04.cpp
 * Author: Administrator
 *
 * Created on September 12, 2018, 10:23 AM
 */

#include <iostream> // For cin & cout functions
#include <stdlib.h>  // For rand & srand functions
#include <ctime>   // For time function

using namespace std;

int main() {
    srand(time(0));  // Set the seed of rand function
    
    // Generate 6 random letters
    char letter1 = (char)(rand() % ((int)'z' - (int)'a') + (int)'a'),
            letter2 = (char)(rand() % ((int)'z' - (int)'a') + (int)'a'),
            letter3 = (char)(rand() % ((int)'z' - (int)'a') + (int)'a'),
            letter4 = (char)(rand() % ((int)'z' - (int)'a') + (int)'a'),
            letter5 = (char)(rand() % ((int)'z' - (int)'a') + (int)'a'),
            letter6 = (char)(rand() % ((int)'z' - (int)'a') + (int)'a');
    
    // Display the result
    cout << "The random generated string with six lowercase letters is: " << 
            letter1  << letter2  << letter3  << letter4  << letter5  << letter1;

    return 0;
}

