
#pragma once
#include "Poker/Hand.h"
#include "Card.h"
#include "Library.h"
#include <iostream>

class HandEvaluatorTest
{
public:
	void testRoyalFlush();
	void testRoyalFlush2();
	void testRoyalFlush3();
	void testStraightFlush();
	void testStraightFlush2();
	void testStraightFlush3();
	void testFourOfAKind();
	void testFourOfAKind2();
	void testFullHouse();
	void testFlush();
	void testStraight();
	void testStraight2();
	void testThreeOfAKind();
	void testThreeOfAKind2();
	void testTwoPairs();
	void testPair();
	void testHighCard();
};
