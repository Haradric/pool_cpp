#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << "Zombie " << this->_name << " is here!" << std::endl;
}

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {
	std::cout << "Zombie " << this->_name << " is here!" << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << "<" << this->_name << "(" << this->_type << ")> Grrrrrllllggghh... *dead*" << std::endl; 
}

void	Zombie::setName(std::string name) {
	this->_name = name;
}

void	Zombie::setType(std::string type) {
	this->_type = type;
}

void	Zombie::announce(void) {
	std::cout << "<" << this->_name << "(" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}
