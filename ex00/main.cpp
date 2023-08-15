#include "Zombie.hpp"

int main() {
	randomChump("Gerard");
	Zombie* z = newZombie("Francis");
	z->announce();
	delete z;
	return 0;
}
