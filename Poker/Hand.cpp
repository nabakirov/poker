#include "Hand.h"


Hand::Hand() {};


void Hand::sortHand(Card *hand)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (hand[i].getValue() < hand[j].getValue())
			{
				std::swap(hand[i], hand[j]);
			}
		}
	}
}


Hand::Hand(Card hand[5])
{
	//sorting the hand
	sortHand(hand);

	for (int i = 0; i < 5; i++)
	{
		Hand::set[i] = hand[i];
	}

	//Geting combination
	int pairs = 0;
	int comb;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i != j)
			{
				if (hand[i].getValue() == hand[j].getValue())
				{
					pairs++;
					Hand::pairs.push_back(hand[i]);
				}
			}
		}
	}
	if (pairs == 2)
	{
		//Pair
		comb = 1;
	}
	else if (pairs == 6)
	{
		//three of a kind
		comb = 3;

	}
	else if (pairs == 4)
	{
		//TWO PAIR
		comb = 2;

	}
	else if (pairs == 12)
	{
		//FOUR OF A KIND
		comb = 7;

	}
	else if (pairs == 8)
	{
		//FULL HOUSE
		comb = 6;

	}
	else
	{
		int cntn = 0;
		int cnts = 0;
		for (int i = 1; i < 5; i++)
		{
			if (hand[i - 1].getValue() + 1 == hand[i].getValue())
			{
				cntn++;
			}
			if (hand[i - 1].getSuit() == hand[i].getSuit())
			{
				cnts++;
			}
		}
		if (cntn == 4 && cnts == 4)
		{
			if (hand[4].getValue() == 12)
			{
				//ROYAL FLUSH
				comb = 9;
			}
			else
			{
				//STRAIGHT FLUSH
				comb = 8;
			}
			
		}
		else if (cnts == 4 && cntn == 3)
		{
			if (hand[0].getValue() == 0 && hand[4].getValue() == 12 && hand[1].getValue() == 1 && hand[2].getValue() == 2 && hand[3].getValue() == 3)
			{
				//STRAIGHT FLUSH
				comb = 8;
			}
			else 
			{
				//FLUSH
				comb = 5;
			}
		}
		else if (cntn == 4)
		{
			//STRAIGHT
			comb = 4;
		}
		else if (cnts == 4)
		{
			//FLUSH
			comb = 5;
		}
		
		else
		{
			//HIGT CARD
			comb = 0;
		}
	}
	Hand::combination = comb;
}
int Hand::getCombination()
{
	return Hand::combination;
}	

//returns the last element of vector pairs
Card Hand::getPairs()
{
	return Hand::pairs[Hand::pairs.size() - 1];
}Card Hand::getCard(int index)
{
	return Hand::set[index];
}

