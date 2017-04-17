#pragma once
#include <vector>
#include <ctime>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <string>

#include "Card.h"
#include "Hand.h"
#include "Library.h"
#include "Comparator.h"
#include "Io.h"
#include "test.h"



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