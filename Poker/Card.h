#pragma once
class Card
{
private:
	int value;
	char suit;

public:
	Card(int, char);
	int getValue();
	char getSuit();
	string view();
	bool isBigger(Card);
	bool isLower(Card);
	bool isEqual(Card);	
};