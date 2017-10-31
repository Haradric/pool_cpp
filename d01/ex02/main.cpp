
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void	randomChump(void) {
	const char *name[] = {"Valera", "Grisha", "Misha", "Tolya", "Opanas", "Elena"};
	const char *type[] = {"fast", "slow", "strong", "weak", "mighty"};

	ZombieEvent	event;
	Zombie		*z;

	event.setZombieType(type[rand() % 5]);
	z = event.newZombie(name[rand() % 6]);
	z->announce();
	delete z;
}

int		main(void) {
	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	{
		randomChump();
		std::cout << std::endl;
	}
	return (0);
}
