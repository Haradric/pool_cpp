
#include <iostream>

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {
}

void	HumanA::attack(void) const {
	std::cout << this->_name << " with his " << this->_weapon.getType() << std::endl;
}