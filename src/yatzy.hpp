#pragma once

#include <array>

namespace Yatzy {
enum class Categories
{
    chance,
	yatzy
};

int score(Categories, std::array<int, 5>);

}
