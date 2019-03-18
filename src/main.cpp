#include <cassert>

#include "yatzy.hpp"

int main()
{

	assert(Yatzy::score(Yatzy::Categories::chance, {1,1,3,3,6}) == 14);
    
}
