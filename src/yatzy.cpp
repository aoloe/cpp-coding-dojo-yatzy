#include "yatzy.hpp"

#include <numeric>
#include <algorithm>

namespace Yatzy {

int score(Categories categories, std::array<int, 5> dice)
{
    switch (categories) {
        case Categories::chance:
            return std::accumulate(dice.begin(), dice.end(), 0);
        case Categories::yatzy:
            return std::equal(dice.begin() + 1, dice.end(), dice.begin()) ? 50 : 0;
        case Categories::ones:
        break;
        case Categories::twos:
            return std::count(dice.begin(), dice.end(), 2) * 2;
        case Categories::threes:
        break;
        case Categories::fours:
            return std::count(dice.begin(), dice.end(), 4) * 4;
        case Categories::fives:
        break;
        case Categories::sixes:
        break;
    }
    return 0;
}

}
