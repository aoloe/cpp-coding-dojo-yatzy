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

int score(Categories, std::array<int, 5>);

}
