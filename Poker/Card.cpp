
#include "Card.h"
#include "Library.h"

	
	
	Card::Card() {};


	Card::Card(int value, char suit)
	{
		Card::value = value;
		Card::suit = suit;
	}

	int Card::getValue()
	{
		return value;
	}

	char Card::getSuit()
	{
		return suit;
	}

	std::string Card::view()
	{
		std::string str = Library::values.find(value);
		return Library::values.find(value) + std::string(1,suit);
	}

	bool Card::isBigger(Card second)
	{
		return value > second.value;
	}

	bool Card::isLower(Card second)
	{
		return value < second.value;
	}

	bool Card::isEqual(Card second)
	{
		return value == second.value;
	}


};