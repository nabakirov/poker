#pragma once
#include "Card.h"
#include <vector>



class Hand
{
private:
	Card set[5];
	int combination;
	std::vector<Card> pairs;
	void sortHand(Card[]);
public:
	
	Hand();
	Hand(Card[5]);
	int getCombination();
	Card getPairs();
	Card getCard(int);
};
