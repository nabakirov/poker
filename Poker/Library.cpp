#include "Library.h"

std::map<int, std::string> Library::values = {
	{ 0, "2" },
	{ 1, "3" },
	{ 2, "4" },
	{ 3, "5" },
	{ 4, "6" },
	{ 5, "7" },
	{ 6, "8" },
	{ 7, "9" },
	{ 8, "10" },
	{ 9, "J" },
	{ 10, "Q" },
	{ 11, "K" },
	{ 12, "A" }
};

char Library::suit[4] = { 'C', 'H', 'S', 'D' };

std::map<int, std::string> Library::combination = {
	{ 0, "HIGT CARD" },
	{ 1, "PAIR" },
	{ 2, "TWO PAIR" },
	{ 3, "THREE OF A KIND" },
	{ 4, "STRAIGHT" },
	{ 5, "FLUSH" },
	{ 6, "FULL HOUSE" },
	{ 7, "FOUR OF A KIND" },
	{ 8, "STRAIGHT FLUSH" },
	{ 9, "ROYAL FLUSH" }
};