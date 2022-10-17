#include <iostream>
#include "graph1.h"
#include "CardPlayer.h"

CardPlayer::CardPlayer()
{
	color = 'r';
	noCards = 0;
	hand = 0;
}

CardPlayer::~CardPlayer()
{
	delete[] hand;
}
void CardPlayer::setNoCards(int noCards)
{
	if (noCards < 5) {
		this->noCards = 5;
	} else if (noCards > 10) {
		this->noCards = 10;
	} else {
		this->noCards = noCards;
	}
}

int CardPlayer::getNoCards()
{
	return this->noCards;
}

void CardPlayer::setColor(char color)
{
	this->color = color;
}

void CardPlayer::displayHand(int x, int y)
{
		
}

int CardPlayer::computeScore()
{
	
}

//Implemented for you
void CardPlayer::deal()
{
  bool duplicate = false;


  for (int i = 0; i < noCards; i++)
  {
    hand[i] = rand() % 13 + 2;

    do
    {
	  duplicate = false;
	  for (int j = 0; j < i; j++)
	  {
	    if (hand[i] == hand[j])
	    {
	      hand[i] = rand() % 13 + 2;
	      duplicate = true;
	      break;
	    }
	  }
      } while (duplicate);
   }
	
}
