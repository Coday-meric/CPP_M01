//
// Created by aymeric on 14/08/23.
//
#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie z = Zombie(name);
	z.announce();
}