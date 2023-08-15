//
// Created by aymeric on 15/08/23.
//

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon {
private:
	std::string _type;
public:
	Weapon(std::string name);
	~Weapon();
	const std::string &getType();
	void setType(std::string type);
};


#endif //WEAPON_HPP
