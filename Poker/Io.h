#pragma once
#include "Hand.h"
#include <iostream>
#include "Library.h"
#include <fstream>
#include <stdlib.h>


class Io
{
public:
	static void outHand(Hand);
	static void outWinner(int);
	static void outInFile(Hand, Hand, int);
	
};
