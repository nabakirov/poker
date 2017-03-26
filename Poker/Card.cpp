#pragma once
#include "Card.h"
class Card
{
private:
	int value;
	char suit;

public:

	Card(int value, char suit)
	{
		this->value = value;
		this->suit = suit;
	}

	int getValue()
	{
		return value;
	}

	char getSuit()
	{
		return suit;
	}

	std::string View()
	{
		return Library.values.get(value) + suit;
	}

	bool isBigger(Card second)
	{
		return value > second.value;
	}

	bool isLower(Card second)
	{
		return value < second.value;
	}

	bool isEqual(Card second)
	{
		return value == second.value;
	}


};