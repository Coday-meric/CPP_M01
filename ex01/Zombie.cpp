//
// Created by aymeric on 14/08/23.
//

#include "Zombie.hpp"

Zombie::Zombie() {
	std::cout << "Un Zombie a rejoint la horde !" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Un Zombie a quitte la horde !" << std::endl;
}

void Zombie::announce() {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name){
	this->_name = name;
}