
#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
public:
		ZombieHorde(int n);
		~ZombieHorde(void);
void	announce(void) const;

private:
	Zombie	**_horde;
	int		_size;

};

#endif