/*
 *4.19 (Order three cities) Write a program that prompts the user to enter three 
cities and displays them in ascending order.
 */

/* 
 * File:   Exercise19_04.cpp
 * Author: Administrator
 *
 * Created on September 12, 2018, 12:06 PM
 */

#include <iostream> // For cin & cout functions
#include <string> // For string function

using namespace std;

int main() {
    // Prompt the user to enter the first city
    cout << "Enter the first city: ";
    string city1;
    getline(cin, city1);
    
    // Prompt the user to enter the seconed city
    cout << "Enter the second city: ";
    string city2;
    getline(cin, city2);
    
    // Prompt the user to enter the third city
    cout << "Enter the third city: ";
    string city3;
    getline(cin, city3);
    
    string temp;
    
    // Reorder the 3 cities
    if(city1 > city2) {
        temp = city1;
        city1 = city2;
        city2 = temp;
    }
    
    if(city2 > city3) {
        temp = city2;
        city2 = city3;
        city3 = temp;
    }
    
    if(city1 > city2) {
        temp = city1;
        city1 = city2;
        city2 = temp;
    }
    
    // Display the result
    cout << "The three cities in alphabetical order are " + city1 
            + " " + city2 + " " + city3;

    return 0;
}

