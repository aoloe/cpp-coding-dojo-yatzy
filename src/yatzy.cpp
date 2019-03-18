#include "yatzy.hpp"

#include <numeric>

namespace Yatzy {

int score(Categories categories, std::array<int, 5> dice)
{
    if (categories == Categories::chance) {
        return std::accumulate(dice.begin(), dice.end(), 0);
    } else {
        return 50;
    }
}

}
