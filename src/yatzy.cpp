#include "yatzy.hpp"

#include <numeric>

namespace Yatzy {

int score(Categories, std::array<int, 5> dice)
{
    return std::accumulate(dice.begin(), dice.end(), 0);
}

}
