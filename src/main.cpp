#include <cassert>

#include "yatzy.hpp"

int main()
{

	assert(Yatzy::score(Yatzy::Categories::chance, {1,1,3,3,6}) == 14);
	assert(Yatzy::score(Yatzy::Categories::chance, {4,5,5,6,1}) == 21);
	assert(Yatzy::score(Yatzy::Categories::yatzy, {1,1,1,1,1}) == 50);
    
}
