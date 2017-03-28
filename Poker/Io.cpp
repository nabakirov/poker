#include "Io.h"
#include <iostream>
#include "Library.h"
#include <fstream>
#include <stdlib.h>


void Io::outHand(Hand hand)
{
	std::cout << std::endl;
	
	for (int i = 0; i < 5; i++)
	{
		std::cout << "\t" << hand.getCard(i).view() << "\t";
	}
	std::cout << std::endl << "\t" <<Library::combination.at(hand.getCombination()) << std::endl;
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




void Io::outInFile(Hand hand1, Hand hand2, int compare)
{
	std::ofstream out;
	out.open("Summary.txt", _IOS_Nocreate);
	if (out.fail())
	{
		std::cout << std::endl << "File does not exist! Create the file 'Summary.txt' and repeat\n";
	}
	else
	{
		out << "First Player: \n";
		for (int i = 0; i < 5; i++)
		{
			out << "\t" << hand1.getCard(i).view() << "\t";
		}
		out << std::endl << "\t" << Library::combination.at(hand1.getCombination()) << std::endl;
		out << "Second Player: \n";
		for (int i = 0; i < 5; i++)
		{
			out << "\t" << hand2.getCard(i).view() << "\t";
		}
		out << std::endl << "\t" << Library::combination.at(hand2.getCombination()) << std::endl;
		if (compare == 1)
		{
			out << "First Player Won" << std::endl;
		}
		else if (compare == 2)
		{
			out << "Second Player Won" << std::endl;
		}
		else if (compare == 0)
		{
			out << "Equal" << std::endl;
		}
		else
		{
			out << "Something Went Wrong" << std::endl;
		}
	}
}