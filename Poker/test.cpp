#include "test.h"



void test::combTest()
{
	HandEvaluatorTest test1;
	test1.testHighCard();
	test1.testPair();
	test1.testTwoPairs();
	test1.testThreeOfAKind();
	test1.testThreeOfAKind2();
	test1.testStraight();
	test1.testStraight2();
	test1.testFlush();
	test1.testFullHouse();
	test1.testFourOfAKind();
	test1.testFourOfAKind2();
	test1.testStraightFlush();
	test1.testStraightFlush2();
	test1.testStraightFlush3();
	test1.testRoyalFlush();
	test1.testRoyalFlush2();
	test1.testRoyalFlush3();
}

void test::comparatorTest()
{
	TestComparator test;
	test.testEqualFlushes();
	test.testEqualHighCard();
	test.testEqualPairs();
	test.testEqualStraights();
	test.testEqualStrightFlushs();
	test.testEqualTwoPairs();
	test.testNotEqualFlushes();
	test.testNotEqualFourOfAKind();
	test.testNotEqualFullHouse();
	test.testNotEqualHighCard();
	test.testNotEqualPairs();
	test.testNotEqualStraights();
	test.testNotEqualStrightFlushs();
	test.testNotEqualThreeOfAKind();
	test.testNotEqualTwoPairs();
	test.testRoyalFlushsAreEqual();
}