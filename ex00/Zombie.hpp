//
// Created by aymeric on 14/08/23.
//

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie{
public:
	Zombie(std::string name);
	~Zombie(void);
	void announce(void);
private:
	std::string name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif //ZOMBIE_HPP
