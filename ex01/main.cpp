#include "Zombie.hpp"

int main() {
	int	i = 0;
	int N = 15;
	Zombie* z = zombieHorde(N, "Francis");
	while (i < N)
	{
		z[i].announce();
		i++;
	}
	delete [] z;
	return 0;
}
