#include "unistd.h"
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int		main(void)
{
	ZombieHorde *horde1;
	ZombieHorde horde2(10);
	
	horde1 = new ZombieHorde(10);

	std::cout << "--------" << "THE HORDE IS COMING!" << "--------" << std::endl;
	horde1->announce();
	delete horde1;

	std::cout << "--------" << "THE HORDE IS COMING!" << "--------" << std::endl;
	horde2.announce();

	return (0);
}