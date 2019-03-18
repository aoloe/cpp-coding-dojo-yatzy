#include <cassert>

#include "yatzy.hpp"

int main()
{

	assert(Yatzy::score(Yatzy::Categories::chance, {1,1,3,3,6}) == 14);
	assert(Yatzy::score(Yatzy::Categories::chance, {4,5,5,6,1}) == 21);
	assert(Yatzy::score(Yatzy::Categories::yatzy, {1,1,1,1,1}) == 50);
	assert(Yatzy::score(Yatzy::Categories::yatzy, {5,5,5,5,5}) == 50);
	assert(Yatzy::score(Yatzy::Categories::yatzy, {1,1,1,2,1}) == 0);
	assert(Yatzy::score(Yatzy::Categories::fours, {1,1,2,4,4}) == 8);
	assert(Yatzy::score(Yatzy::Categories::fours, {1,1,2,4,3}) == 4);
	assert(Yatzy::score(Yatzy::Categories::twos, {2,3,2,5,1}) == 4);
	assert(Yatzy::score(Yatzy::Categories::ones, {2,3,2,5,1}) == 1);
	assert(Yatzy::score(Yatzy::Categories::threes, {3,3,3,5,1}) == 9);
}
