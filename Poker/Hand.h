#pragma once
#include "Card.h"
#include <vector>





class Hand
{
private:
	Card set[5];
	int combination;
	std::vector<std::pair<Card, int> > pairs;
	void sortHand(Card*);
public:
	
	Hand();
	Hand(Card[5]);
	int getCombination();
	std::vector<std::pair<Card, int> > getPairs();
	Card getCard(int);
};
