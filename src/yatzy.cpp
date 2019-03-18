#include "yatzy.hpp"

#include <numeric>
#include <algorithm>

namespace Yatzy {

int score(Categories categories, std::array<int, 5> dice)
{
    if (categories == Categories::chance) {
        return std::accumulate(dice.begin(), dice.end(), 0);
    } else {
        return std::equal(dice.begin() + 1, dice.end(), dice.begin()) ? 50 : 0;
    }
}

}
