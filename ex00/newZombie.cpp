//
// Created by aymeric on 14/08/23.
//
#include "Zombie.hpp"

Zombie* newZombie( std::string name ){
	Zombie* zombie = new Zombie(name);
	return (zombie);
}