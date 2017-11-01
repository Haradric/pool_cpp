
#include <iostream>

#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon *weapon) : _name(name), _weapon(weapon) {
}

HumanB::HumanB(std::string name) : _name(name) {
}

void	HumanB::attack(void) const {
	std::cout << this->_name << " with his " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}