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
#include <conio.h>
#include <string>


class Table
{
private:
	std::vector<Card> deck;
	void play();	
public:
	
	void generateDeck();
	void genetareHand(Card *);
	void run();
};