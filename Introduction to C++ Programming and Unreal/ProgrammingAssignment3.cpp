// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>
#include <string>

#include "Deck.h"
#include "Card.h"

using namespace consoleCards;

// IMPORTANT: Only add code in the section
// indicated below. The code I've provided
// makes your solution work with the
// automated grader on Coursera

/**
 * Programming Assignment 3
 * @return exit status
*/
int main()
{
    // loop while there's more input
    std::string Input;
    std::getline(std::cin, Input);
    while (Input[0] != 'q')
    {
        // Add your code between this comment
        // and the comment below. You can of
        // course add more space between the
        // comments as needed
Deck myDeck;// = new Deck();
        // declare a deck variable
        // DON'T SHUFFLE THE DECK
Card C1 = myDeck.TakeTopCard();
Card C2 = myDeck.TakeTopCard();
Card C3 = myDeck.TakeTopCard();
Card C4 = myDeck.TakeTopCard();
Card C5 = myDeck.TakeTopCard();
Card C6 = myDeck.TakeTopCard();
Card C7 = myDeck.TakeTopCard();
Card C8 = myDeck.TakeTopCard();

        // deal 2 cards each to 4 players (deal properly, dealing
        // the first card to each player before dealing the
        // second card to each player)


        // deal 1 more card to players 2 and 3
Card C9 = myDeck.TakeTopCard();
Card C10 = myDeck.TakeTopCard();
        // flip all the cards over
C1.FlipOver();
C2.FlipOver();
C3.FlipOver();
C4.FlipOver();
C5.FlipOver();//1
C6.FlipOver();//2
C7.FlipOver();//3
C8.FlipOver();//4
C9.FlipOver();//2
C10.FlipOver();//3

        // print the cards for player 1
C1.Print();
C5.Print();
        // print the cards for player 2
C2.Print();
C6.Print();
C9.Print();
        // print the cards for player 3
C3.Print();
C7.Print();
C10.Print();
        // print the cards for player 4
C4.Print();
C8.Print();

        // Don't add or modify any code below
        // this comment
        std::getline(std::cin, Input);
    }
}
