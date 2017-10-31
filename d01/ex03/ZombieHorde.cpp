
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : _size(n) {
	const char *name[] = {"Valera", "Grisha", "Misha ", "Tolya ", "Opanas", "Elena"};
	const char *type[] = {"fast", "slow", "strong", "weak", "mighty"};

	srand(time(NULL));
	this->_horde = new Zombie*[this->_size];
	for (int i = 0; i < this->_size; i++) {
		this->_horde[i] = new Zombie(name[rand() % 6], type[rand() % 5]);
	}
}

ZombieHorde::~ZombieHorde(void) {
	for (int i = 0; i < this->_size; i++) {
		delete this->_horde[i];
	}
	delete [] this->_horde;
}

void	ZombieHorde::announce(void) const {
	for (int i = 0; i < this->_size; i++) {
		this->_horde[i]->announce();
	}
}