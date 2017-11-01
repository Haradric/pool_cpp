
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : _size(n) {
	const char *name[] = {"Valera", "Grisha", "Misha ", "Tolya ", "Opanas", "Elena"};
	const char *type[] = {"fast", "slow", "strong", "weak", "mighty"};

	srand(time(NULL));
	if (n < 0) {
		std::cout << "this is not a horde!" << std::endl;
		return ;
	}
	this->_horde = new Zombie[this->_size];
	for (int i = 0; i < this->_size; i++) {
		this->_horde[i].setName(name[rand() % 6]);
		this->_horde[i].setType(type[rand() % 5]);
	}
}

ZombieHorde::~ZombieHorde(void) {
	if (this->_size > 0)
		delete [] this->_horde;
}

void	ZombieHorde::announce(void) const {

	for (int i = 0; i < this->_size; i++) {
		this->_horde[i].announce();
	}
}