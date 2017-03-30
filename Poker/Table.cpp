#include "Table.h"
#include "Card.h"
#include "Hand.h"
#include "Library.h"
#include <ctime>
#include <stdlib.h>
#include <iostream>
#include "Comparator.h"
#include "Io.h"
#include "test.h"

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
//	test::combTest();
	test::comparatorTest();
	
/*	Table game;

	game.generateDeck();
	Card cards[5];
	game.genetareHand(cards);
	Hand hand1(cards);
	game.genetareHand(cards);
	Hand hand2(cards);
	
	
	int compare = Comparator::getWinner(hand1, hand2);

	int chosen;
	std::cout << "Where would you like to print the result?\n\t1 - in file\n\t2 - on display\n";
	std::cin >> chosen;
	if (chosen == 2)
	{
		std::cout << "Player 1:";
		Io::outHand(hand1);
		std::cout << "Player 2:";
		Io::outHand(hand2);
		Io::outWinner(compare);
	}
	else if (chosen == 1)
	{
		Io::outInFile(hand1, hand2, compare);
	}
	
	*/
}