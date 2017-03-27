#include "Io.h"
#include <iostream>
#include "Library.h"


void Io::outHand(Hand hand)
{
	std::cout << std::endl;
	
	for (int i = 0; i < 5; i++)
	{
		std::cout << "\t" << hand.getCard(i).view() << "\t";
	}
	std::cout << std::endl << Library::combination.at(hand.getCombination()) << std::endl;
}
void Io::outWinner(int compare)
{
	if (compare == 1)
	{
		std::cout << "First Player Won" << std::endl;
	}
	else if (compare == 2)
	{
		std::cout << "Second Player Won" << std::endl;
	}
	else if (compare == 0)
	{
		std::cout << "Equal" << std::endl;
	}
	else
	{
		std::cout << "Something Went Wrong" << std::endl;
	}
}