#pragma once
#include <vector>
#include "Card.h"
#include "Hand.h"
#include "Library.h"
#include <ctime>
#include <stdlib.h>
#include <iostream>
#include "Comparator.h"
#include "Io.h"
#include "test.h"


class Table
{
private:
	int handsNum;
	std::vector<Hand> hands;
	std::vector<Card> deck;
	void play();
public:
	void setHandsNum(int n);
	void generateDeck();
	void genetareHand(Card *);
	void run();
};