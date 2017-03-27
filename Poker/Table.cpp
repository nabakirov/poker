#include "Table.h"
#include "Card.h"
#include "Hand.h"
#include "Library.h"
#include <ctime>
#include <stdlib.h>


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
			Table::deck.push_back(Card(i,Library::suit[j]));
			
		}
	}
}

void Table::genetareHand()
{
	srand(time(0));
	int randNum = rand() % Table::deck.size();
	Card cards[5];
	for (int i = 0; i < 5; i++)
	{
		cards[i] = Table::deck[randNum];
		std::swap(Table::deck[randNum], Table::deck[Table::deck.size() - 1]);
		Table::deck.pop_back();
	}
	Hand hand(cards);
}

void Table::run()
{

}