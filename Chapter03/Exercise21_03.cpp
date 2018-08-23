/*
 **3.21 (Game: pick a card) Write a program that simulates picking a card from a 
 *       deck of 52 cards. Your program should display the rank (Ace, 2, 3, 4, 5, 
 *       6, 7, 8, 9, 10, Jack, Queen, King) and suit (Clubs, Diamonds, Hearts, 
 *       Spades) of the card.
 */

/* 
 * File:   Exercise21_03.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on August 22, 2018, 1:14 AM
 */

#include <iostream>  // For cout & cin functions
#include <ctime> // for time function
#include <cstdlib> // for rand and srand functions

using namespace std;

int main() {
    srand(time(0));  // Set the seed of rand()
    
    // Randomly generate the card rank number
    int rank = rand() % 13 + 1;
    
    // Randomly generate the card suit number
    int suit = rand() % 4 + 1;
    
    // Initialize rank & suit Names
    string rankName = "",
            suitName =  "";
    
    // Assign rank Name based on rank number generated
    switch(rank) {
        case 1: rankName = "Ace"; break;
        case 2: rankName = "2"; break;
        case 3: rankName = "3"; break;
        case 4: rankName = "4"; break;
        case 5: rankName = "5"; break;
        case 6: rankName = "6"; break;
        case 7: rankName = "7"; break;
        case 8: rankName = "8"; break;
        case 9: rankName = "9"; break;
        case 10: rankName = "10"; break;
        case 11: rankName = "Jack"; break;
        case 12: rankName = "Queen"; break;
        case 13: rankName = "King";
    }
    
    // Assign suit name based on suit number generated
    switch(suit) {
        case 1: suitName = "Clubs"; break;
        case 2: suitName = "Diamonds"; break;
        case 3: suitName = "Hearts"; break;
        case 4: suitName = "Spades";
    }
    
    // Display the result
    cout << "The card you picked is " << rankName << " of " << suitName;

    return 0;
}

