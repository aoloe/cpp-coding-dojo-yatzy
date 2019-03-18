#pragma once

#include <array>

namespace Yatzy {
enum class Categories
{
    chance
};

int score(Categories, std::array<int, 5>);

}
