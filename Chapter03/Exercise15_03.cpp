/*
 *3.15 (Game: scissor, rock, paper) Write a program that plays the popular scissor, 
 *    rock, paper game. (A scissor can cut a paper, a rock can knock a scissor, and 
 *    a paper can wrap a rock.) The program randomly generates a number 0, 1, or 2 
 *    representing scissor, rock, or paper. The program prompts the user to enter a 
 *    number 0, 1, or 2 and displays a message indicating whether the user or the 
 *    computer wins, loses, or draws.
 */

/* 
 * File:   Exercise15_03.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on August 21, 2018, 10:27 PM
 */

#include <iostream>   // For  cout & cin functions
#include <cstdlib>   // For rand and srand functions
#include <ctime>    // For time function

using namespace std;

int main() {
    // Generate a number
    srand(time(0));
    int computer = (int)(rand() % 3);
        
    //Prompt the user to enter to enter a number 0, 1, or 2
    cout << "scissor (0), rock (1), paper (2): ";
    int guess;  
    
    cin >> guess;   // Receive the value
        
    string guessName ="",
            computerName = " ";    // Initialize guess and computer names
        
        switch(computer) {  // Assign computer names
            case 0: computerName = "scissor";
                    break;
            case 1: computerName = "rock";
                    break;
            case 2: computerName = "paper";
                    break;
        }
        
        switch(guess) {  // Assign user guess names
            case 0: guessName = "scissor";
                    break;
            case 1: guessName = "rock";
                    break;
            case 2: guessName = "paper";
                    break;
        }
        
        // Check won or draw or lose and display the result
        if(guess == computer)
            cout << "The computer is " << computerName << ". You are " << 
                    guessName << " too. It is a draw";
        else if((computer == 0 && guess == 2) ||
                (computer == 1 && guess == 0) ||
                (computer == 2 && guess == 1) )
            cout << "The computer is " << computerName << ". You are " << 
                    guessName << ". You lose";
        else if((computer == 2 && guess == 0) ||
                (computer == 0 && guess == 1) ||
                (computer == 1 && guess == 2) )
            cout << "The computer is " << computerName << ". You are " << 
                    guessName << ". You won";

    return 0;
}

