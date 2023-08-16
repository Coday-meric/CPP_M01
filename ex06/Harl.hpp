//
// Created by aymeric on 15/08/23.
//

#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>

class Harl {
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
public:
	void complain(std::string limit);
};

#endif //HARL_HPP
