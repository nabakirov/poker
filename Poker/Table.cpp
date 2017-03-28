#include "Table.h"
#include "Card.h"
#include "Hand.h"
#include "Library.h"
#include <ctime>
#include <stdlib.h>
#include <iostream>
#include "Comparator.h"
#include "Io.h"

void Table::setHandsNum(int n)
{
	Table::handsNum = n;
}

void Table::generateDeck()
{
	
	for (int i = 0; i < 13; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			Table::deck.push_back(Card(i, Library::suit[j]));
			
		}
	}
}

void Table::genetareHand(Card *cards)
{
	srand(time(NULL));
	
	
	for (int i = 0; i < 5; i++)
	{
		int randNum = rand() % Table::deck.size();
		cards[i] = Table::deck[randNum];
		std::swap(Table::deck[randNum], Table::deck[Table::deck.size() - 1]);
		Table::deck.pop_back();
	}

	
}

void Table::run()
{

	Table game;

	

	game.generateDeck();
	Card cards[5];
	game.genetareHand(cards);
	Hand hand1(cards);
	game.genetareHand(cards);
	Hand hand2(cards);
	
	Comparator comparator;
	int compare = comparator.getWinner(hand1, hand2);
	std::cout << game.deck.size() << std::endl;
	
	std::cout << "Player 1:";
	Io::outHand(hand1);
	std::cout << "Player 2:";
	Io::outHand(hand2);
	Io::outWinner(compare);
}