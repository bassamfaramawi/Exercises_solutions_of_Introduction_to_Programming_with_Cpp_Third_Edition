/*
 *5.41 (Occurrence of max numbers) Write a program that reads integers, finds the 
largest of them, and counts its occurrences. Assume that the input ends with number
0. Suppose that you entered 3 5 2 5 5 5 0; the program finds that the largest
is 5 and the occurrence count for 5 is 4.
(Hint: Maintain two variables, max and count. max stores the current max number,
and count stores its occurrences. Initially, assign the first number to max
and 1 to count. Compare each subsequent number with max. If the number is
greater than max, assign it to max and reset count to 1. If the number is equal to
max, increment count by 1.)
 */

/* 
 * File:   Exercise41_05.cpp
 * Author: Administrator
 *
 * Created on October 9, 2018, 10:50 AM
 */

#include <iostream> // For the cin & cout functions

using namespace std;

int main() {
    //Prompt the user to enter numbers
    cout << "Enter numbers: ";
    int number;
    
    int max = 1,  // Initialize max
            count = 0;  // Initialize count
    
    do{
        cin >> number;
        
        if(number > max) {
            max = number;
            count = 1;
        }
        
        else if(number == max)
            count++;
        
    }while(number != 0);
    
    // Display the result
    cout << "The largest number is " << max << endl;
    cout << "The occurrence count of the largest number is " << count;

    return 0;
}

