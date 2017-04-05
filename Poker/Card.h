#pragma once
#include <string>
#include "Library.h"
class Card
{
private:
	int value;
	char suit;

public:
	Card();
	Card(int, char);
	int getValue();
	char getSuit();
	std::string view();
	bool isBigger(Card);
	bool isLower(Card);
	bool isEqual(Card);	
	
};