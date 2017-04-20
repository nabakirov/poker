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
		if (hand1.getCombination() == 2 || hand1.getCombination() == 1 || hand1.getCombination() == 3 || hand1.getCombination() == 6 || hand1.getCombination() == 7)
		{
			
			return ifEqualPair(hand1, hand2, 1);	
		}
		else
		{
			return ifEqual(hand1, hand2, 4);		
		}
	}
}

int Comparator::ifEqual(Hand hand1, Hand hand2, int k) {
	
	if (hand1.getCard(k).isBigger(hand2.getCard(k)))
	{
		return 1;
	}
	else if (hand1.getCard(k).isLower(hand2.getCard(k)))
	{
		return 2;
	}
	else if (hand1.getCard(k).isEqual(hand2.getCard(k)))
	{
		k--;
		if (k >= 0)
		{
			return ifEqual(hand1, hand2, k);
		}
		else
		{
			return 0;
		}
	}
}
int Comparator::ifEqualPair(Hand hand1, Hand hand2, int k) {
	
		if (hand1.getPairs()[hand1.getPairs().size() - k].first.isBigger(hand2.getPairs()[hand2.getPairs().size() - k].first))
		{
			return 1;
		}
		else if (hand1.getPairs()[hand1.getPairs().size() - k].first.isLower(hand2.getPairs()[hand2.getPairs().size() - k].first))
		{
			return 2;
		}
		else if (hand1.getPairs()[hand1.getPairs().size() - k].first.isEqual(hand2.getPairs()[hand2.getPairs().size() - k].first))
		{
			k++;
			if (hand1.getPairs().size() - k >= 0)
			{
				return ifEqual(hand1, hand2, k);
			}
			else
			{
				return 0;
			}
		}
	
}

		
	
