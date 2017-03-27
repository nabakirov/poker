#include "Comparator.h"

int Comparator::getWinner(Hand hand1, Hand hand2)
{
	if (hand1.getCombination() > hand2.getCombination())
	{
		return 1;
	}
	else if (hand1.getCombination() < hand2.getCombination())
	{
		return 2;
	}
	else
	{
		//If hand1 equals to hand2 by pair
		if (hand1.getCombination() == 2 || hand1.getCombination() == 1 || hand1.getCombination() == 2 || hand1.getCombination() == 3 || hand1.getCombination() == 6 || hand1.getCombination() == 7)
		{
			if (hand1.getPairs().isBigger(hand2.getPairs()))
			{
				return 1;
			}
			else if (hand1.getPairs().isLower(hand2.getPairs()))
			{
				return 2;
			}
			else if (hand1.getPairs().isEqual(hand2.getPairs()))
			{
				return 0;
			}
			
		}
		else
		{
			if (hand1.getCard(4).isBigger(hand2.getCard(4)))
			{
				return 1;
			}
			else if (hand1.getCard(4).isLower(hand2.getCard(4)))
			{
				return 2;
			}
			else return 0;
		}
	}
}