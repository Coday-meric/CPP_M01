//
// Created by aymeric on 15/08/23.
//
#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl h;

	if (argc != 2)
	{
		std::cerr << "Un seul argument accepté !" << std::endl;
		return -1;
	}
	std::string level = argv[1];
	h.complain(level);
	return 0;
}