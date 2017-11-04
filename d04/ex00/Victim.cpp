
#include "Victim.hpp"

Victim::Victim( void ) {

}

Victim::Victim( Victim const & target ) {

	_name = target._name;
}

Victim::Victim( std::string name ) : _name(name) {

	std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
}

Victim::~Victim( void ) {

	std::cout << "Victim " << _name << " just died for no apparent reason !" << std::endl;
}

Victim & Victim::operator=( Victim const & target ) {

	_name = target._name;
	return *this;
}

std::ostream & operator<<( std::ostream &o, Victim & obj ) {

	o << "I am " << obj.getName() << " and I like otters !" << std::endl;
	return o;
}

std::string Victim::getName( void ) {

	return _name;
}

void Victim::getPolymorphed( void ) const {

	std::cout << _name << " has been turned into a cute little sheep !" << std::endl;
}
