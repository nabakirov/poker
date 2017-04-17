#include "Hand.h"


Hand::Hand() {};


void Hand::sortHand(Card *hand)
{
	for (int i = 0; i < 5; i++)
	{
		bool sorted = true;
		for (int j = 1; j < 5; j++)
		{
			if (hand[j].getValue() < hand[j - 1].getValue())
			{
				std::swap(hand[j], hand[j - 1]);
				sorted = false;
			}
		}
		if (sorted)
		{
			break;
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

	std::vector<std::pair<Card, int> > pair;
	//Geting combination
	int pairs = 0;
	int comb;
	int cntn = 0;
	int cnts = 0;
	for (int i = 0; i < 5; i++)
	{
		
		if (pair.empty() || pair[pair.size() - 1].first.getValue() != hand[i].getValue())
		{
			pair.push_back({ hand[i], 1 });
		}
		else
		{
			pair[pair.size() - 1].second++;
		}
		
		if (i != 0)
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
		
	}
	Hand::pairs = pair;
	if (pair.size() == 4)
	{
		//Pair
		comb = 1;
	}
	else if (pair.size() == 3)
	{
		for (int i = 0; i < 3; i++)
		{
			if (pair[i].second == 3)
			{
				//three of a kind
				comb = 3;
			}
			else if (pair[i].second == 2)
			{
				//TWO PAIR
				comb = 2;
			}
		}
	}
	else if (pair.size() == 2)
	{
		if (pair[0].second == 4 || pair[1].second == 4)
		{
			//FOUR OF A KIND
			comb = 7;
		}
		else if (pair[0].second == 3 || pair[1].second == 3)
		{
			//FULL HOUSE
			comb = 6;
		}
	}
	else
	{
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


std::vector<std::pair<Card, int>> Hand::getPairs()
{
	return Hand::pairs;
}

Card Hand::getCard(int index)
{
	return Hand::set[index];
}

