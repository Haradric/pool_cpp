
#include <iostream>

#include "Human.hpp"

std::string	Human::identify(void) {
	return (this->_brain.identify());
}

Brain const	&Human::getBrain(void) const {
	return (this->_brain);
}