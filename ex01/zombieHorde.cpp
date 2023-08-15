//
// Created by aymeric on 14/08/23.
//

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int i = 0;
	Zombie* zh = new Zombie[N];

	while (i < N)
	{
		zh[i].setName(name);
		i++;
	}
	return (&zh[0]);
}