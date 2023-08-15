//
// Created by aymeric on 14/08/23.
//

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->name = name;
	std::cout << this->name << " a etais mordu c'est desormais un zombie !" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Le Zombie " << this->name << " a pris une balle pleine tete !" << std::endl;
}

void Zombie::announce() {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}