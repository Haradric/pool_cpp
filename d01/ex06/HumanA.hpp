
#include <iostream>

#include "Weapon.hpp"

#ifndef HUMANA_HPP
# define HUMANA_HPP

class HumanA
{
public:
	HumanA(std::string name, Weapon &weapon);
	void	attack(void) const;
	void	setWeapon(Weapon weapon);

private:
	std::string	const	_name;
	Weapon				&_weapon;

};

#endif
