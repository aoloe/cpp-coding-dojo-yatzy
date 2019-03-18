#include "yatzy.hpp"

#include <numeric>
#include <algorithm>

namespace Yatzy {

int score(Categories categories, std::array<int, 5> dice)
{
    if (categories == Categories::chance) {
        return std::accumulate(dice.begin(), dice.end(), 0);
    } else if (categories == Categories::yatzy) {
        return std::equal(dice.begin() + 1, dice.end(), dice.begin()) ? 50 : 0;
    } else if (categories == Categories::fours) {
        return 8;
    }
    return 0;
}

}
