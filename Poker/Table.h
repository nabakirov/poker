#pragma once
#include <vector>
#include "Card.h"
#include "Hand.h"


class Table
{
private:
	int handsNum;
	std::vector<Hand> hands;
	std::vector<Card> deck;
public:
	void setHandsNum(int n);
	void generateDeck();
	void genetareHand();
	void run();
};