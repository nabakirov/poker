#include "TestComparator.h"

void TestComparator::testRoyalFlushsAreEqual()
{
	Hand hand1;
	Card cards1[5];

	cards1[0] = Card(8, 'C'); //10
	cards1[1] = Card(9, 'C'); //J
	cards1[2] = Card(10, 'C'); //Q
	cards1[3] = Card(11, 'C'); //K
	cards1[4] = Card(12, 'C'); //A
	hand1 = Hand(cards1);
	
	Hand hand2;
	Card cards2[5];

	cards2[0] = Card(12, 'H'); //A
	cards2[1] = Card(11, 'H'); //K
	cards2[2] = Card(10, 'H'); //Q
	cards2[3] = Card(9, 'H'); //J
	cards2[4] = Card(8, 'H'); //10
	hand2 = Hand(cards2);
	if (Comparator::getWinner(hand1, hand2) == 0)
	{
		std::cout << "testRoyalFlushsAreEqual \t complete\n";
	}
	else
	{
		std::cout << "testRoyalFlushsAreEqual \t failed\n";
	}
}
void TestComparator::testEqualStrightFlushs()
{
	Hand hand1;
	Card cards1[5];

	cards1[0] = Card(12, 'C'); //A
	cards1[1] = Card(0, 'C'); //2
	cards1[2] = Card(1, 'C'); //3
	cards1[3] = Card(2, 'C'); //4
	cards1[4] = Card(3, 'C'); //5
	hand1 = Hand(cards1);

	Hand hand2;
	Card cards2[5];

	cards2[0] = Card(12, 'S'); //A
	cards2[1] = Card(0, 'S'); //2
	cards2[2] = Card(1, 'S'); //3
	cards2[3] = Card(2, 'S'); //4
	cards2[4] = Card(3, 'S'); //5
	hand2 = Hand(cards2);
	if (Comparator::getWinner(hand1, hand2) == 0)
	{
		std::cout << "testRoyalFlushsAreEqual \t complete\n";
	}
	else
	{
		std::cout << "testRoyalFlushsAreEqual \t failed\n";
	}
}
void TestComparator::testNotEqualStrightFlushs()
{
	Hand hand1;
	Card cards1[5];

	cards1[0] = Card(12, 'C'); //A
	cards1[1] = Card(0, 'C'); //2
	cards1[2] = Card(1, 'C'); //3
	cards1[3] = Card(2, 'C'); //4
	cards1[4] = Card(3, 'C'); //5
	hand1 = Hand(cards1);

	Hand hand2;
	Card cards2[5];

	cards2[0] = Card(4, 'H'); //6
	cards2[1] = Card(0, 'H'); //2
	cards2[2] = Card(1, 'H'); //3
	cards2[3] = Card(2, 'H'); //4
	cards2[4] = Card(3, 'H'); //5
	hand2 = Hand(cards2);
	if (Comparator::getWinner(hand1, hand2) == 1)
	{
		std::cout << "testNotEqualStrightFlushs1 \t complete\n";
	}
	else
	{
		std::cout << "testNotEqualStrightFlushs1 \t failed\n";
	}

	Hand hand3;
	Card cards3[5];

	cards3[0] = Card(4, 'C'); //6
	cards3[1] = Card(0, 'C'); //2
	cards3[2] = Card(1, 'C'); //3
	cards3[3] = Card(2, 'C'); //4
	cards3[4] = Card(3, 'C'); //5
	hand3 = Hand(cards3);

	Hand hand4;
	Card cards4[5];

	cards4[0] = Card(4, 'H'); //6
	cards4[1] = Card(5, 'H'); //7
	cards4[2] = Card(6, 'H'); //8
	cards4[3] = Card(7, 'H'); //9
	cards4[4] = Card(8, 'H'); //10
	hand4 = Hand(cards4);
	if (Comparator::getWinner(hand3, hand4) == 2)
	{
		std::cout << "testNotEqualStrightFlushs2 \t complete\n";
	}
	else
	{
		std::cout << "testNotEqualStrightFlushs2 \t failed\n";
	}
}
void TestComparator::testNotEqualFourOfAKind()
{
	Hand hand1;
	Card cards1[5];

	cards1[0] = Card(7, 'D'); //9
	cards1[1] = Card(11, 'C'); //K
	cards1[2] = Card(7, 'S'); //9
	cards1[3] = Card(7, 'H'); //9
	cards1[4] = Card(7, 'С'); //9
	hand1 = Hand(cards1);

	Hand hand2;
	Card cards2[5];

	cards2[0] = Card(6, 'D'); //8
	cards2[1] = Card(11, 'H'); //K
	cards2[2] = Card(6, 'S'); //8
	cards2[3] = Card(6, 'H'); //8
	cards2[4] = Card(6, 'C'); //8
	hand2 = Hand(cards2);
	if (Comparator::getWinner(hand1, hand2) == 1)
	{
		std::cout << "testNotEqualFourOfAKind1 \t complete\n";
	}
	else
	{
		std::cout << "testNotEqualFourOfAKind1 \t failed\n";
	}

	Hand hand3;
	Card cards3[5];

	cards3[0] = Card(7, 'D'); //9
	cards3[1] = Card(11, 'C'); //K
	cards3[2] = Card(7, 'S'); //9
	cards3[3] = Card(7, 'H'); //9
	cards3[4] = Card(7, 'C'); //9
	hand3 = Hand(cards3);

	Hand hand4;
	Card cards4[5];

	cards4[0] = Card(11, 'D'); //K
	cards4[1] = Card(6, 'C'); //8
	cards4[2] = Card(11, 'S'); //K
	cards4[3] = Card(11, 'H'); //K
	cards4[4] = Card(11, 'C'); //K
	hand4 = Hand(cards4);
	if (Comparator::getWinner(hand3, hand4) == 2)
	{
		std::cout << "testNotEqualFourOfAKind2 \t complete\n";
	}
	else
	{
		std::cout << "testNotEqualFourOfAKind2 \t failed\n";
	}
}
void TestComparator::testNotEqualFullHouse()
{
	Hand hand1;
	Card cards1[5];

	cards1[0] = Card(8, 'D'); //10
	cards1[1] = Card(8, 'C'); //10
	cards1[2] = Card(8, 'S'); //10
	cards1[3] = Card(11, 'H'); //K
	cards1[4] = Card(11, 'D'); //K
	hand1 = Hand(cards1);

	Hand hand2;
	Card cards2[5];

	cards2[0] = Card(8, 'D'); //10
	cards2[1] = Card(8, 'C'); //10
	cards2[2] = Card(8, 'S'); //10
	cards2[3] = Card(7, 'H'); //9
	cards2[4] = Card(7, 'D'); //9
	hand2 = Hand(cards2);
	if (Comparator::getWinner(hand1, hand2) == 1)
	{
		std::cout << "testNotEqualFullHouse1 \t complete\n";
	}
	else
	{
		std::cout << "testNotEqualFullHouse1 \t failed\n";
	}

	Hand hand3;
	Card cards3[5];

	cards3[0] = Card(7, 'D'); //9
	cards3[1] = Card(7, 'C'); //9
	cards3[2] = Card(7, 'S'); //9
	cards3[3] = Card(2, 'H'); //4
	cards3[4] = Card(2, 'D'); //4
	hand3 = Hand(cards3);

	Hand hand4;
	Card cards4[5];

	cards4[0] = Card(3, 'D'); //5
	cards4[1] = Card(3, 'C'); //5
	cards4[2] = Card(3, 'S'); //5
	cards4[3] = Card(11, 'H'); //K
	cards4[4] = Card(11, 'D'); //K
	hand4 = Hand(cards4);
	if (Comparator::getWinner(hand3, hand4) == 2)
	{
		std::cout << "testNotEqualFullHouse2 \t complete\n";
	}
	else
	{
		std::cout << "testNotEqualFullHouse2 \t failed\n";
	}
}
void TestComparator::testEqualFlushes()
{
	Hand hand1;
	Card cards1[5];

	cards1[0] = Card(7, 'H'); //9
	cards1[1] = Card(12, 'H'); //A
	cards1[2] = Card(5, 'H'); //7
	cards1[3] = Card(9, 'H'); //J
	cards1[4] = Card(3, 'H'); //5
	hand1 = Hand(cards1);

	Hand hand2;
	Card cards2[5];

	cards2[0] = Card(7, 'D'); //9
	cards2[1] = Card(12, 'D'); //A
	cards2[2] = Card(5, 'D'); //7
	cards2[3] = Card(9, 'D'); //J
	cards2[4] = Card(3, 'D'); //5
	hand2 = Hand(cards2);
	if (Comparator::getWinner(hand1, hand2) == 0)
	{
		std::cout << "testEqualFlushes \t complete\n";
	}
	else
	{
		std::cout << "testEqualFlushes \t failed\n";
	}
}
void TestComparator::testNotEqualFlushes()
{
	Hand hand1;
	Card cards1[5];

	cards1[0] = Card(7, 'H'); //9
	cards1[1] = Card(12, 'H'); //A
	cards1[2] = Card(5, 'H'); //7
	cards1[3] = Card(9, 'H'); //J
	cards1[4] = Card(3, 'H'); //5
	hand1 = Hand(cards1);

	Hand hand2;
	Card cards2[5];

	cards2[0] = Card(7, 'C'); //9
	cards2[1] = Card(11, 'C'); //K
	cards2[2] = Card(5, 'C'); //7
	cards2[3] = Card(9, 'C'); //J
	cards2[4] = Card(3, 'C'); //5
	hand2 = Hand(cards2);
	if (Comparator::getWinner(hand1, hand2) == 1)
	{
		std::cout << "testNotEqualFlushes1 \t\t complete\n";
	}
	else
	{
		std::cout << "testNotEqualFlushes1 \t\t failed\n";
	}

	Hand hand3;
	Card cards3[5];

	cards3[0] = Card(12, 'H'); //A
	cards3[1] = Card(11, 'H'); //K
	cards3[2] = Card(2, 'H'); //4
	cards3[3] = Card(1, 'H'); //3
	cards3[4] = Card(0, 'H'); //2
	hand3 = Hand(cards3);

	Hand hand4;
	Card cards4[5];

	cards4[0] = Card(2, 'S'); //4
	cards4[1] = Card(3, 'S'); //5
	cards4[2] = Card(1, 'S'); //3
	cards4[3] = Card(11, 'S'); //K
	cards4[4] = Card(12, 'S'); //A
	hand4 = Hand(cards4);
	if (Comparator::getWinner(hand3, hand4) == 2)
	{
		std::cout << "testNotEqualFlushes2 \t\t complete\n";
	}
	else
	{
		std::cout << "testNotEqualFlushes2 \t\t failed\n";
	}
}
void TestComparator::testEqualStraights()
{
	Hand hand1;
	Card cards1[5];

	cards1[0] = Card(8, 'H'); //10
	cards1[1] = Card(9, 'C'); //J
	cards1[2] = Card(10, 'S'); //Q
	cards1[3] = Card(11, 'D'); //K
	cards1[4] = Card(7, 'H'); //9
	hand1 = Hand(cards1);

	Hand hand2;
	Card cards2[5];

	cards2[0] = Card(8, 'D'); //10
	cards2[1] = Card(9, 'H'); //J
	cards2[2] = Card(10, 'C'); //Q
	cards2[3] = Card(11, 'H'); //K
	cards2[4] = Card(7, 'D'); //9
	hand2 = Hand(cards2);
	if (Comparator::getWinner(hand1, hand2) == 0)
	{
		std::cout << "testEqualStraights \t\t complete\n";
	}
	else
	{
		std::cout << "testEqualStraights \t\t failed\n";
	}
}
void TestComparator::testNotEqualStraights()
{
	Hand hand1;
	Card cards1[5];

	cards1[0] = Card(7, 'H'); //9
	cards1[1] = Card(8, 'H'); //10
	cards1[2] = Card(9, 'C'); //J
	cards1[3] = Card(10, 'C'); //Q
	cards1[4] = Card(11, 'D'); //K
	hand1 = Hand(cards1);

	Hand hand2;
	Card cards2[5];

	cards2[0] = Card(7, 'S'); //9
	cards2[1] = Card(8, 'C'); //10
	cards2[2] = Card(6, 'S'); //8
	cards2[3] = Card(9, 'S'); //J
	cards2[4] = Card(10, 'C'); //Q
	hand2 = Hand(cards2);
	if (Comparator::getWinner(hand1, hand2) == 1)
	{
		std::cout << "testNotEqualStraights1 \t complete\n";
	}
	else
	{
		std::cout << "testNotEqualStraights1 \t failed\n";
	}

	Hand hand3;
	Card cards3[5];

	cards3[0] = Card(4, 'C'); //6
	cards3[1] = Card(5, 'H'); //7
	cards3[2] = Card(6, 'S'); //8
	cards3[3] = Card(7, 'D'); //9
	cards3[4] = Card(8, 'C'); //10
	hand3 = Hand(cards3);

	Hand hand4;
	Card cards4[5];

	cards4[0] = Card(12, 'H'); //A
	cards4[1] = Card(0, 'S'); //2
	cards4[2] = Card(1, 'D'); //3
	cards4[3] = Card(2, 'C'); //4
	cards4[4] = Card(3, 'H'); //5
	hand4 = Hand(cards4);
	if (Comparator::getWinner(hand3, hand4) == 2)
	{
		std::cout << "testNotEqualStraights2 \t complete\n";
	}
	else
	{
		std::cout << "testNotEqualStraights2 \t failed\n";
	}
}
void TestComparator::testNotEqualThreeOfAKind()
{
	Hand hand1;
	Card cards1[5];

	cards1[0] = Card(8, 'C'); //10
	cards1[1] = Card(8, 'H'); //10
	cards1[2] = Card(8, 'S'); //10
	cards1[3] = Card(10, 'D'); //Q
	cards1[4] = Card(11, 'C'); //K
	hand1 = Hand(cards1);

	Hand hand2;
	Card cards2[5];

	cards2[0] = Card(6, 'S'); //8
	cards2[1] = Card(5, 'C'); //7
	cards2[2] = Card(7, 'S'); //9
	cards2[3] = Card(7, 'S'); //9
	cards2[4] = Card(7, 'C'); //9
	hand2 = Hand(cards2);
	if (Comparator::getWinner(hand1, hand2) == 1)
	{
		std::cout << "testNotEqualThreeOfAKind1 \t complete\n";
	}
	else
	{
		std::cout << "testNotEqualThreeOfAKind1 \t failed\n";
	}

	Hand hand3;
	Card cards3[5];

	cards3[0] = Card(8, 'C'); //10
	cards3[1] = Card(8, 'H'); //10
	cards3[2] = Card(8, 'S'); //10
	cards3[3] = Card(4, 'D'); //6
	cards3[4] = Card(11, 'C'); //K
	hand3 = Hand(cards3);

	Hand hand4;
	Card cards4[5];

	cards4[0] = Card(6, 'H'); //8
	cards4[1] = Card(12, 'C'); //A
	cards4[2] = Card(11, 'H'); //K
	cards4[3] = Card(12, 'S'); //A
	cards4[4] = Card(12, 'D'); //A
	hand4 = Hand(cards4);
	if (Comparator::getWinner(hand3, hand4) == 2)
	{
		std::cout << "testNotEqualThreeOfAKind2 \t complete\n";
	}
	else
	{
		std::cout << "testNotEqualThreeOfAKind2 \t failed\n";
	}
}
void TestComparator::testEqualTwoPairs()
{
	Hand hand1;
	Card cards1[5];

	cards1[0] = Card(8, 'H'); //10
	cards1[1] = Card(8, 'C'); //10
	cards1[2] = Card(10, 'S'); //Q
	cards1[3] = Card(9, 'D'); //J
	cards1[4] = Card(9, 'H'); //J
	hand1 = Hand(cards1);

	Hand hand2;
	Card cards2[5];

	cards2[0] = Card(8, 'D'); //10
	cards2[1] = Card(8, 'S'); //10
	cards2[2] = Card(10, 'D'); //Q
	cards2[3] = Card(9, 'C'); //J
	cards2[4] = Card(9, 'S'); //J
	hand2 = Hand(cards2);
	if (Comparator::getWinner(hand1, hand2) == 0)
	{
		std::cout << "testEqualTwoPairs \t complete\n";
	}
	else
	{
		std::cout << "testEqualTwoPairs \t failed\n";
	}
}
void TestComparator::testNotEqualTwoPairs()
{
	Hand hand1;
	Card cards1[5];

	cards1[0] = Card(8, 'C'); //10
	cards1[1] = Card(8, 'H'); //10
	cards1[2] = Card(10, 'S'); //Q
	cards1[3] = Card(10, 'D'); //Q
	cards1[4] = Card(11, 'C'); //K
	hand1 = Hand(cards1);

	Hand hand2;
	Card cards2[5];

	cards2[0] = Card(6, 'H'); //8
	cards2[1] = Card(5, 'C'); //7
	cards2[2] = Card(5, 'H'); //7
	cards2[3] = Card(7, 'S'); //9
	cards2[4] = Card(7, 'D'); //9
	hand2 = Hand(cards2);
	if (Comparator::getWinner(hand1, hand2) == 1)
	{
		std::cout << "testEqualTwoPairs1 \t complete\n";
	}
	else
	{
		std::cout << "testEqualTwoPairs1 \t failed\n";
	}

	Hand hand3;
	Card cards3[5];

	cards3[0] = Card(8, 'C'); //10
	cards3[1] = Card(8, 'H'); //10
	cards3[2] = Card(3, 'S'); //5
	cards3[3] = Card(3, 'C'); //5
	cards3[4] = Card(0, 'H'); //2
	hand3 = Hand(cards3);

	Hand hand4;
	Card cards4[5];

	cards4[0] = Card(8, 'H'); //10
	cards4[1] = Card(8, 'S'); //10
	cards4[2] = Card(4, 'C'); //6
	cards4[3] = Card(4, 'D'); //6
	cards4[4] = Card(6, 'D'); //8
	hand4 = Hand(cards4);
	if (Comparator::getWinner(hand3, hand4) == 2)
	{
		std::cout << "testEqualTwoPairs2 \t complete\n";
	}
	else
	{
		std::cout << "testEqualTwoPairs2 \t failed\n";
	}
}
void TestComparator::testEqualPairs()
{
	Hand hand1;
	Card cards1[5];

	cards1[0] = Card(8, 'H'); //10
	cards1[1] = Card(7, 'C'); //9
	cards1[2] = Card(10, 'S'); //Q
	cards1[3] = Card(9, 'D'); //J
	cards1[4] = Card(9, 'H'); //J
	hand1 = Hand(cards1);

	Hand hand2;
	Card cards2[5];

	cards2[0] = Card(8, 'C'); //10
	cards2[1] = Card(7, 'S'); //9
	cards2[2] = Card(10, 'H'); //Q
	cards2[3] = Card(9, 'C'); //J
	cards2[4] = Card(9, 'S'); //J
	hand2 = Hand(cards2);
	if (Comparator::getWinner(hand1, hand2) == 0)
	{
		std::cout << "testEqualPairs \t\t\t complete\n";
	}
	else
	{
		std::cout << "testEqualPairs \t\t\t failed\n";
	}
}
void TestComparator::testNotEqualPairs()
{
	Hand hand1;
	Card cards1[5];

	cards1[0] = Card(8, 'C'); //10
	cards1[1] = Card(8, 'S'); //10
	cards1[2] = Card(4, 'D'); //6
	cards1[3] = Card(7, 'S'); //9
	cards1[4] = Card(11, 'H'); //K
	hand1 = Hand(cards1);

	Hand hand2;
	Card cards2[5];

	cards2[0] = Card(6, 'H'); //8
	cards2[1] = Card(1, 'D'); //3
	cards2[2] = Card(11, 'D'); //K
	cards2[3] = Card(6, 'S'); //8
	cards2[4] = Card(6, 'S'); //8
	hand2 = Hand(cards2);
	if (Comparator::getWinner(hand1, hand2) == 1)
	{
		std::cout << "testNotEqualPairs1 \t\t complete\n";
	}
	else
	{
		std::cout << "testNotEqualPairs1 \t\t failed\n";
	}

	Hand hand3;
	Card cards3[5];

	cards3[0] = Card(8, 'C'); //10
	cards3[1] = Card(7, 'S'); //9
	cards3[2] = Card(4, 'H'); //6
	cards3[3] = Card(4, 'D'); //6
	cards3[4] = Card(11, 'D'); //K
	hand3 = Hand(cards3);

	Hand hand4;
	Card cards4[5];

	cards4[0] = Card(6, 'D'); //8
	cards4[1] = Card(3, 'D'); //5
	cards4[2] = Card(12, 'S'); //A
	cards4[3] = Card(8, 'D'); //10
	cards4[4] = Card(8, 'H'); //10
	hand4 = Hand(cards4);
	if (Comparator::getWinner(hand3, hand4) == 2)
	{
		std::cout << "testNotEqualPairs2 \t\t complete\n";
	}
	else
	{
		std::cout << "testNotEqualPairs2 \t\t failed\n";
	}
}
void TestComparator::testEqualHighCard()
{
	Hand hand1;
	Card cards1[5];

	cards1[0] = Card(8, 'H'); //10
	cards1[1] = Card(7, 'C'); //9
	cards1[2] = Card(10, 'S'); //Q
	cards1[3] = Card(9, 'D'); //J
	cards1[4] = Card(0, 'H'); //2
	hand1 = Hand(cards1);

	Hand hand2;
	Card cards2[5];

	cards2[0] = Card(8, 'C'); //10
	cards2[1] = Card(7, 'S'); //9
	cards2[2] = Card(10, 'H'); //Q
	cards2[3] = Card(9, 'C'); //J
	cards2[4] = Card(0, 'S'); //2
	hand2 = Hand(cards2);
	if (Comparator::getWinner(hand1, hand2) == 0)
	{
		std::cout << "testEqualHighCard \t complete\n";
	}
	else
	{
		std::cout << "testEqualHighCard \t failed\n";
	}
}
void TestComparator::testNotEqualHighCard()
{
	Hand hand1;
	Card cards1[5];

	cards1[0] = Card(8, 'C'); //10
	cards1[1] = Card(12, 'H'); //A
	cards1[2] = Card(5, 'D'); //7
	cards1[3] = Card(7, 'S'); //9
	cards1[4] = Card(11, 'C'); //K
	hand1 = Hand(cards1);

	Hand hand2;
	Card cards2[5];

	cards2[0] = Card(8, 'S'); //10
	cards2[1] = Card(12, 'S'); //A
	cards2[2] = Card(4, 'D'); //6
	cards2[3] = Card(7, 'D'); //9
	cards2[4] = Card(11, 'H'); //K
	hand2 = Hand(cards2);
	if (Comparator::getWinner(hand1, hand2) == 1)
	{
		std::cout << "testNotEqualHighCard1 \t\t complete\n";
	}
	else
	{
		std::cout << "testNotEqualHighCard1 \t\t failed\n";
	}

	Hand hand3;
	Card cards3[5];

	cards3[0] = Card(9, 'S'); //J
	cards3[1] = Card(0, 'D'); //2
	cards3[2] = Card(10, 'H'); //Q
	cards3[3] = Card(6, 'H'); //8
	cards3[4] = Card(8, 'C'); //10
	hand3 = Hand(cards3);

	Hand hand4;
	Card cards4[5];

	cards4[0] = Card(10, 'H'); //Q
	cards4[1] = Card(9, 'H'); //J
	cards4[2] = Card(8, 'S'); //10
	cards4[3] = Card(6, 'S'); //8
	cards4[4] = Card(1, 'D'); //3
	hand4 = Hand(cards4);
	
	if (Comparator::getWinner(hand3, hand4) == 2)
	{
		std::cout << "testNotEqualHighCard2 \t\t complete\n";
	}
	else
	{
		std::cout << "testNotEqualHighCard2 \t\t failed\n";
	}
}
