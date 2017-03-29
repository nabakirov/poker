#pragma once
#include "Hand.h"
#include "Card.h"
#include "Comparator.h"
#include <iostream>

class TestComparator
{
public:
	void testRoyalFlushsAreEqual();
	void testEqualStrightFlushs();
	void testNotEqualStrightFlushs();
	void testNotEqualFourOfAKind();
	void testNotEqualFullHouse();
	void testEqualFlushes();
	void testNotEqualFlushes();
	void testEqualStraights();
	void testNotEqualStraights();
	void testNotEqualThreeOfAKind();
	void testEqualTwoPairs();
	void testNotEqualTwoPairs();
	void testEqualPairs();
	void testNotEqualPairs();
	void testEqualHighCard();
	void testNotEqualHighCard();
	
};
