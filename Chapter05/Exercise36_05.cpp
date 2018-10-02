/*
 ***5.36 (Game: scissor, rock, paper) Revise Programming Exercise 3.15 to let 
 the user continuously play ten games. The program must display the number of 
 times a user wins, the computer wins and the number of draws.
 */

/* 
 * File:   Exercise36_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on October 2, 2018, 5:40 PM
 */

#include <cstdlib>  // For rand and srand functions
#include <iostream> // For the cin & cout functions
#include <ctime>  // For time functions

using namespace std;

int main() {
    int computer;
    int guess;
    string guessName ="",
            computerName = " ";    // Initialize guess and computer names
    int userWins = 0 ,
            computerWins = 0,
            draws = 0;    // Initialize the numbers of wins and draws
    int count = 0;
        
    while(count < 10) {
        // Generate a number
        srand(time(0));
        computer = (int)(rand() % 3);
        
        //Prompt the user to enter to enter a number 0, 1, or 2
        cout << "scissor (0), rock (1), paper (2): ";
        cin >> guess;   // Receive the value
            
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
        if(guess == computer) {
            cout << "The computer is " << computerName << ". You are " << 
                    guessName << " too. It is a draw" << endl;
            draws++;
        }
        else if((computer == 0 && guess == 2) ||
                (computer == 1 && guess == 0) ||
                (computer == 2 && guess == 1) ) {
            cout << "The computer is " << computerName << ". You are " << 
                    guessName << ". You lose" << endl;
            computerWins++;
        }
        else if((computer == 2 && guess == 0) ||
                (computer == 0 && guess == 1) ||
                (computer == 1 && guess == 2) ) {
            cout << "The computer is " << computerName << ". You are " << 
                    guessName << ". You won" << endl;
            userWins++;
        }
        
        count++;
    }
    
    cout << "\n\nThe user won " << userWins << " times" << endl
            << "The computer won " << computerWins << " times" << endl
            << "The draws is " << draws;

    return 0;
}

