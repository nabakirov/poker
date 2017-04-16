#pragma once
#include "Hand.h"



class Comparator
{
public:
	static int getWinner(Hand, Hand);
	static int ifEqual(Hand, Hand, int);
	static int ifEqualPair(Hand, Hand, int);
};
