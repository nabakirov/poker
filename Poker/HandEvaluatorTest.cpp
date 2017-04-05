#include "HandEvaluatorTest.h"



void HandEvaluatorTest::testRoyalFlush()
{
	Hand hand;
	Card cards[5];
	
	cards[0] = Card(12, 'C'); //A
	cards[1] = Card(11, 'C'); //K
	cards[2] = Card(10, 'C'); //Q
	cards[3] = Card(9, 'C'); //J
	cards[4] = Card(8, 'C'); //10
	hand = Hand(cards);
	std::string k = Library::combination.at(hand.getCombination());
	if (k == "ROYAL FLUSH")
	{
		std::cout << "testRoyalFlush1 \t complete\n";
	}
	else
	{
		std::cout << "testRoyalFlush1 \t failed\n";
	}
}
void HandEvaluatorTest::testRoyalFlush2()
{
	Hand hand;
	Card cards[5];

	cards[0] = Card(12, 'C'); //A
	cards[1] = Card(2, 'C'); //4
	cards[2] = Card(10, 'C'); //Q
	cards[3] = Card(9, 'C'); //J
	cards[4] = Card(8, 'C'); //10
	hand = Hand(cards);
	std::string k = Library::combination.at(hand.getCombination());
	if (k != "ROYAL FLUSH")
	{
		std::cout << "testRoyalFlush2 \t complete\n";
	}
	else
	{
		std::cout << "testRoyalFlush2 \t failed\n";
	}
}
void HandEvaluatorTest::testRoyalFlush3()
{
	Hand hand;
	Card cards[5];

	cards[0] = Card(12, 'S'); //A
	cards[1] = Card(11, 'S'); //K
	cards[2] = Card(10, 'S'); //Q
	cards[3] = Card(9, 'S'); //J
	cards[4] = Card(8, 'S'); //10
	hand = Hand(cards);
	std::string k = Library::combination.at(hand.getCombination());
	if (k == "ROYAL FLUSH")
	{
		std::cout << "testRoyalFlush2 \t complete\n";
	}
	else
	{
		std::cout << "testRoyalFlush2 \t failed\n";
	}
}
void HandEvaluatorTest::testStraightFlush()
{
	Hand hand;
	Card cards[5];

	cards[0] = Card(12, 'C'); //A
	cards[1] = Card(0, 'C'); //2
	cards[2] = Card(1, 'C'); //3
	cards[3] = Card(2, 'C'); //4
	cards[4] = Card(3, 'C'); //5
	hand = Hand(cards);
	std::string k = Library::combination.at(hand.getCombination());
	if (k == "STRAIGHT FLUSH")
	{
		std::cout << "testStraightFlush \t complete\n";
	}
	else
	{
		std::cout << "testStraightFlush \t failed\n";
	}
}
void HandEvaluatorTest::testStraightFlush2()
{
	Hand hand;
	Card cards[5];

	cards[0] = Card(7, 'D'); //9
	cards[1] = Card(11, 'D'); //K
	cards[2] = Card(10, 'D'); //Q
	cards[3] = Card(9, 'D'); //J
	cards[4] = Card(8, 'D'); //10
	hand = Hand(cards);
	std::string k = Library::combination.at(hand.getCombination());
	if (k == "STRAIGHT FLUSH")
	{
		std::cout << "testStraightFlush2 \t complete\n";
	}
	else
	{
		std::cout << "testStraightFlush2 \t failed\n";
	}
}
void HandEvaluatorTest::testStraightFlush3()
{
	Hand hand;
	Card cards[5];

	cards[0] = Card(7, 'D'); //9
	cards[1] = Card(11, 'D'); //K
	cards[2] = Card(10, 'D'); //Q
	cards[3] = Card(12, 'D'); //A
	cards[4] = Card(8, 'D'); //10
	hand = Hand(cards);
	std::string k = Library::combination.at(hand.getCombination());
	if (k != "STRAIGHT FLUSH")
	{
		std::cout << "testStraightFlush3 \t complete\n";
	}
	else
	{
		std::cout << "testStraightFlush3 \t failed\n";
	}
}
void HandEvaluatorTest::testFourOfAKind()
{
	Hand hand;
	Card cards[5];

	cards[0] = Card(7, 'D'); //9
	cards[1] = Card(7, 'C'); //9
	cards[2] = Card(7, 'S'); //9
	cards[3] = Card(7, 'H'); //9
	cards[4] = Card(8, 'D'); //10
	hand = Hand(cards);
	std::string k = Library::combination.at(hand.getCombination());
	if (k == "FOUR OF A KIND")
	{
		std::cout << "testFourOfAKind \t complete\n";
	}
	else
	{
		std::cout << "testFourOfAKind \t failed\n";
	}
}
void HandEvaluatorTest::testFourOfAKind2()
{
	Hand hand;
	Card cards[5];

	cards[0] = Card(7, 'D'); //9
	cards[1] = Card(11, 'C'); //K
	cards[2] = Card(7, 'S'); //9
	cards[3] = Card(7, 'H'); //9
	cards[4] = Card(8, 'D'); //10
	hand = Hand(cards);
	std::string k = Library::combination.at(hand.getCombination());
	if (k != "FOUR OF A KIND")
	{
		std::cout << "testFourOfAKind2 \t complete\n";
	}
	else
	{
		std::cout << "testFourOfAKind2 \t failed\n";
	}
}
void HandEvaluatorTest::testFullHouse()
{
	Hand hand;
	Card cards[5];

	cards[0] = Card(7, 'D'); //9
	cards[1] = Card(9, 'C'); //J
	cards[2] = Card(7, 'S'); //9
	cards[3] = Card(9, 'H'); //J
	cards[4] = Card(9, 'D'); //J
	hand = Hand(cards);
	std::string k = Library::combination.at(hand.getCombination());
	if (k == "FULL HOUSE")
	{
		std::cout << "testFullHouse \t complete\n";
	}
	else
	{
		std::cout << "testFullHouse \t failed\n";
	}
}
void HandEvaluatorTest::testFlush()
{
	Hand hand;
	Card cards[5];

	cards[0] = Card(7, 'H'); //9
	cards[1] = Card(12, 'H'); //A
	cards[2] = Card(5, 'H'); //7
	cards[3] = Card(9, 'H'); //J
	cards[4] = Card(3, 'H'); //5
	hand = Hand(cards);
	std::string k = Library::combination.at(hand.getCombination());
	if (k == "FLUSH")
	{
		std::cout << "testFlush \t complete\n";
	}
	else
	{
		std::cout << "testFlush \t failed\n";
	}
}
void HandEvaluatorTest::testStraight()
{
	Hand hand;
	Card cards[5];

	cards[0] = Card(8, 'H'); //10
	cards[1] = Card(9, 'C'); //J
	cards[2] = Card(10, 'S'); //Q
	cards[3] = Card(11, 'D'); //K
	cards[4] = Card(7, 'H'); //9
	hand = Hand(cards);
	std::string k = Library::combination.at(hand.getCombination());
	if (k == "STRAIGHT")
	{
		std::cout << "testStraight \t complete\n";
	}
	else
	{
		std::cout << "testStraight \t failed\n";
	}
}
void HandEvaluatorTest::testStraight2()
{
	Hand hand;
	Card cards[5];

	cards[0] = Card(8, 'H'); //10
	cards[1] = Card(9, 'C'); //J
	cards[2] = Card(1, 'S'); //3
	cards[3] = Card(11, 'D'); //K
	cards[4] = Card(7, 'H'); //9
	hand = Hand(cards);
	std::string k = Library::combination.at(hand.getCombination());
	if (k != "STRAIGHT")
	{
		std::cout << "testStraight2 \t complete\n";
	}
	else
	{
		std::cout << "testStraight2 \t failed\n";
	}
}
void HandEvaluatorTest::testThreeOfAKind()
{
	Hand hand;
	Card cards[5];

	cards[0] = Card(8, 'H'); //10
	cards[1] = Card(9, 'C'); //J
	cards[2] = Card(10, 'S'); //Q
	cards[3] = Card(9, 'D'); //J
	cards[4] = Card(9, 'H'); //J
	hand = Hand(cards);
	std::string k = Library::combination.at(hand.getCombination());
	if (k == "THREE OF A KIND")
	{
		std::cout << "testThreeOfAKind \t complete\n";
	}
	else
	{
		std::cout << "testThreeOfAKind \t failed\n";
	}
}
void HandEvaluatorTest::testThreeOfAKind2()
{
	Hand hand;
	Card cards[5];

	cards[0] = Card(8, 'H'); //10
	cards[1] = Card(8, 'C'); //10
	cards[2] = Card(10, 'S'); //Q
	cards[3] = Card(9, 'D'); //J
	cards[4] = Card(9, 'H'); //J
	hand = Hand(cards);
	std::string k = Library::combination.at(hand.getCombination());
	if (k != "THREE OF A KIND")
	{
		std::cout << "testThreeOfAKind2 \t complete\n";
	}
	else
	{
		std::cout << "testThreeOfAKind2 \t failed\n";
	}
}
void HandEvaluatorTest::testTwoPairs()
{
	Hand hand;
	Card cards[5];

	cards[0] = Card(8, 'H'); //10
	cards[1] = Card(8, 'C'); //10
	cards[2] = Card(10, 'S'); //Q
	cards[3] = Card(9, 'D'); //J
	cards[4] = Card(9, 'H'); //J
	hand = Hand(cards);
	std::string k = Library::combination.at(hand.getCombination());
	if (k == "TWO PAIR")
	{
		std::cout << "testTwoPairs \t complete\n";
	}
	else
	{
		std::cout << "testTwoPairs \t failed\n";
	}
}
void HandEvaluatorTest::testPair()
{
	Hand hand;
	Card cards[5];

	cards[0] = Card(8, 'H'); //10
	cards[1] = Card(7, 'C'); //9
	cards[2] = Card(10, 'S'); //Q
	cards[3] = Card(9, 'D'); //J
	cards[4] = Card(9, 'H'); //J
	hand = Hand(cards);
	std::string k = Library::combination.at(hand.getCombination());
	if (k == "PAIR")
	{
		std::cout << "testPair \t complete\n";
	}
	else
	{
		std::cout << "testPair \t failed\n";
	}
}
void HandEvaluatorTest::testHighCard()
{
	Hand hand;
	Card cards[5];

	cards[0] = Card(8, 'H'); //10
	cards[1] = Card(7, 'C'); //9
	cards[2] = Card(10, 'S'); //Q
	cards[3] = Card(9, 'D'); //J
	cards[4] = Card(0, 'H'); //2
	hand = Hand(cards);
	std::string k = Library::combination.at(hand.getCombination());
	if (k == "HIGT CARD")
	{
		std::cout << "testHighCard \t complete\n";
	}
	else
	{
		std::cout << "testHighCard \t failed\n";
	}
}