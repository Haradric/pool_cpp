
#include <iostream>

#include "Weapon.hpp"

#ifndef HUMANB_HPP
# define HUMANB_HPP

class HumanB
{
public:
	HumanB(std::string name, Weapon *weapon);
	HumanB(std::string name);
	void	attack(void) const;
	void	setWeapon(Weapon &weapon);

private:
	std::string	const	_name;
	Weapon				*_weapon;
};

#endif
