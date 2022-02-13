// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>
#include <string>
#include <vector>

#include "Deck.h"
#include "Card.h"

using namespace consoleCards;

// autograder support
int GetNumCards();
void InitializeTestCaseCards();
int TestCaseNumber = 0;
int NextCard = 0;
Card TestCaseCards[9];

// function to call to get a card
Card GetCard();

int NumCards = 0;

/**
 * Programming Assignment 3
 * @return exit status
*/
int main()
{
	// IMPORTANT: Only add code in the section
	// indicated below. The code I've provided
	// makes your solution work with the 
	// automated grader on Coursera
	std::string Input;
	std::cin >> Input;
	while (Input[0] != 'q')
	{
		TestCaseNumber = std::stoi(Input);
		NumCards = GetNumCards();
		InitializeTestCaseCards();
		NextCard = 0;

		// Add your code between this comment
		// and the comment below. You can of
		// course add more space between the
		// comments as needed
		Card MyCard;
		std::string c = "Clubs",h = "Hearts" , d = "Diamonds" , s = "Spades";
		int C = 0, H = 0 , D = 0 , S = 0;
		size_t found = Input.find(c);
		while (NumCards --> 0)
		{
			MyCard = GetCard();
			if( MyCard.IsFaceUp() == false){
				MyCard.FlipOver();
			}
			if ( (std::string) MyCard.GetSuit() == c){
				C++;
			}else if((std::string) MyCard.GetSuit() == h){
				H++;
			}else if((std::string) MyCard.GetSuit() == d){
				D++;
			}else{
				S++;
			}
		}
		/*
		while (found != std::string::npos)
		{
			C++;
			found = Input.find(c,found+1);
		}
		found = Input.find(h);
		while (found != std::string::npos)
		{
			H++;
			found = Input.find(h,found+1);
		}
		found = Input.find(d);
		while (found != std::string::npos)
		{
			D++;
			found = Input.find(d,found+1);
		}
		found = Input.find(s);
		while (found != std::string::npos)
		{
			S++;
			found = Input.find(s,found+1);
		}
		*/
		std::cout<<"C"<<C<<" D"<<D<<" H"<<H<<" S"<<S<<"\n";

		// Don't add or modify any code below
		// this comment
		std::cin >> Input;
	}

	return 0;
}

/**
 * Gets a card
 * @return a card
*/
Card GetCard()
{
	NextCard++;
	return TestCaseCards[NextCard - 1];
}

/**
 * Gets how many cards will be in the hand for the
 * current test case number
 * @return number of cards to add to hand
*/
int GetNumCards()
{
	switch (TestCaseNumber)
	{
	case 1:
	case 2:
	case 6:
		return 5;
	case 3:
		return 2;
	case 4:
		return 7;
	case 5:
		return 0;
	case 7:
		return 1;
	case 8:
	case 10:
		return 4;
	case 9:
		return 9;
	default:
		return 0;
	}
}

/**
 * Initializes the set of cards returned by GetCard based
 * on the test case number
*/
void InitializeTestCaseCards()
{
	switch (TestCaseNumber)
	{
	case 1:
		TestCaseCards[0] = Card{ Rank::Two, Suit::Clubs };
		TestCaseCards[1] = Card{ Rank::Three, Suit::Diamonds };
		TestCaseCards[2] = Card{ Rank::Four, Suit::Spades };
		TestCaseCards[3] = Card{ Rank::Ten, Suit::Spades };
		TestCaseCards[4] = Card{ Rank::Ace, Suit::Spades }; 
		break;
	case 2:
		TestCaseCards[0] = Card{ Rank::Two, Suit::Clubs };
		TestCaseCards[1] = Card{ Rank::Three, Suit::Clubs };
		TestCaseCards[2] = Card{ Rank::Four, Suit::Clubs };
		TestCaseCards[3] = Card{ Rank::Ten, Suit::Clubs };
		TestCaseCards[4] = Card{ Rank::Ace, Suit::Clubs };
		break;
	case 3:
		TestCaseCards[0] = Card{ Rank::Ten, Suit::Diamonds };
		TestCaseCards[1] = Card{ Rank::Ace, Suit::Diamonds };
		break;
	case 4:
		TestCaseCards[0] = Card{ Rank::Two, Suit::Hearts };
		TestCaseCards[1] = Card{ Rank::Three, Suit::Hearts }; 
		TestCaseCards[2] = Card{ Rank::Four, Suit::Hearts }; 
		TestCaseCards[3] = Card{ Rank::Five, Suit::Hearts }; 
		TestCaseCards[4] = Card{ Rank::Six, Suit::Hearts }; 
		TestCaseCards[5] = Card{ Rank::Seven, Suit::Hearts }; 
		TestCaseCards[6] = Card{ Rank::Eight, Suit::Hearts }; 
		break;
	case 6:
		TestCaseCards[0] = Card{ Rank::Ten, Suit::Clubs };
		TestCaseCards[1] = Card{ Rank::Jack, Suit::Clubs };
		TestCaseCards[2] = Card{ Rank::Queen, Suit::Clubs };
		TestCaseCards[3] = Card{ Rank::King, Suit::Clubs };
		TestCaseCards[4] = Card{ Rank::Ace, Suit::Clubs };
		break;
	case 7:
		TestCaseCards[0] = Card{ Rank::Queen, Suit::Hearts };
		break;
	case 8:
		TestCaseCards[0] = Card{ Rank::Jack, Suit::Clubs };
		TestCaseCards[1] = Card{ Rank::Jack, Suit::Diamonds };
		TestCaseCards[2] = Card{ Rank::Jack, Suit::Hearts };
		TestCaseCards[3] = Card{ Rank::Jack, Suit::Spades };
		break;
	case 9:
		TestCaseCards[0] = Card{ Rank::Two, Suit::Spades };
		TestCaseCards[1] = Card{ Rank::Three, Suit::Spades };
		TestCaseCards[2] = Card{ Rank::Four, Suit::Spades };
		TestCaseCards[3] = Card{ Rank::Five, Suit::Spades };
		TestCaseCards[4] = Card{ Rank::Six, Suit::Spades };
		TestCaseCards[5] = Card{ Rank::Seven, Suit::Spades };
		TestCaseCards[6] = Card{ Rank::Eight, Suit::Spades };
		TestCaseCards[7] = Card{ Rank::Nine, Suit::Spades };
		TestCaseCards[8] = Card{ Rank::Ten, Suit::Spades };
		break;
	case 10:
		TestCaseCards[0] = Card{ Rank::Two, Suit::Clubs };
		TestCaseCards[1] = Card{ Rank::Three, Suit::Diamonds };
		TestCaseCards[2] = Card{ Rank::Four, Suit::Hearts };
		TestCaseCards[3] = Card{ Rank::Five, Suit::Spades };
		break;
	default:
		break;
	}
}
