#pragma once

#include <array>

namespace Yatzy {
enum class Categories
{
    chance,
	yatzy,
	ones,
	twos,
	threes,
	fours,
	fives,
	sixes
};

using Dice = std::array<int, 5>;

int score(Categories, Dice);

}
