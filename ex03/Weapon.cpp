//
// Created by aymeric on 15/08/23.
//

#include "Weapon.hpp"

Weapon::Weapon(std::string name) : _type(name) {
}

Weapon::~Weapon() {

}

const std::string &Weapon::getType() {
	std::string& type = this->_type;
	return type;
}

void Weapon::setType(std::string type) {
	this->_type = type;
}