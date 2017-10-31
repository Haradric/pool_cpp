
#include "Pony.hpp"

Pony::Pony(std::string name) : name(name) {
	std::cout << this->name << " is alive!" << std::endl;
}

Pony::~Pony(void) {
	std::cout << this->name << " is dead" << std::endl;
}

void		Pony::setWeight(size_t weight) {
	this->_weight = weight;
}

size_t		Pony::getWeight(void) const {
	return (this->_weight);
}

void		Pony::setColor(std::string color) {
	this->_color = color;
}

std::string	Pony::getColor(void) const {
	return (this->_color);
}