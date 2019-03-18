#include "yatzy.hpp"

#include <numeric>
#include <algorithm>

namespace Yatzy {

static int numbers(Dice dice, int number)
{
    return std::count(dice.begin(), dice.end(), number) * number;
}

int score(Categories categories, Dice dice)
{
    switch (categories) {
        case Categories::chance:
            return std::accumulate(dice.begin(), dice.end(), 0);
        case Categories::yatzy:
            return std::equal(dice.begin() + 1, dice.end(), dice.begin()) ? 50 : 0;
        case Categories::ones:
            return numbers(dice, 1);
        case Categories::twos:
            return numbers(dice, 2);
        case Categories::threes:
        break;
        case Categories::fours:
            return numbers(dice, 4);
        case Categories::fives:
        break;
        case Categories::sixes:
        break;
    }
    return 0;
}

}
